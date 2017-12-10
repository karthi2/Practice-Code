#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int find_valid_pos(int i, int j, int m, int n, int *x, int *y) {
    int count = 0;
    if ((i - 1) >= 0) {
        x[count] = i - 1;
        y[count] = j;
        count++;
    }
    
    if ((i + 1) < m) {
        x[count] = i + 1;
        y[count] = j;
        count++;
    }
    
    if ((j + 1) < n) {
        x[count] = i;
        y[count] = j + 1;
        count++;
    }
    
    if ((j - 1) >= 0) {
        x[count] = i;
        y[count] = j - 1;
        count++;
    }
    
    return count;
}

int findnext_letter (int i, int j, char board[][3], int k, char *word, int m,
        int n, int visited[][3]) {
    int x[4];
    int y[4];
    int count = 0;
    int ii = 0;
    int jj = 0;
    
    count = find_valid_pos(i, j, m, n, x, y);
    
    for (ii = 0; ii < count; ii++) {
        //printf("%d %d\n", x[ii], y[ii]);
        if (visited[x[ii]][y[ii]] != 1) {
            if (board[x[ii]][y[ii]] == word[k]) {
                k++;
                visited[x[ii]][y[ii]] = 1;
                if (k == strlen(word)) {
                    return 1;
                } else {
                    if (findnext_letter(x[ii], y[ii], board, k, word, m, n,
                                visited)) {
                        return 1;
                    } else {
                        k--;
                    }
                }
            }
        }
    }
    
    return 0;
}

int exist(char board[][3], int boardRowSize, int boardColSize, char* word) {
    if (word == NULL) {
        return 0;
    }
    
    int i = 0;
    int j = 0;
    int k = 0;
    int res = 0;
    int visited[boardRowSize][boardColSize];
    memset(visited, 0, sizeof(int) * (boardColSize) * boardRowSize);

    for (i = 0; i < boardRowSize; i++) {
        for (j = 0; j < boardColSize; j++) {
            if (board[i][j] == word[k]) {
                visited[i][j] = 1;
                k++;
                if (k == strlen(word)) {
                    return 1;
                } else {
                    res = findnext_letter(i, j, board, k, word, boardRowSize, boardColSize, visited);
                    if (res) {
                        return 1;
                    } else {
                        k = 0;
                        memset(visited, 0, sizeof(int) * (boardColSize) *
                                boardRowSize);
                    }
                }
            }
        }
    }
    
    return 0;
}

int main () {
    /*
    char board[3][4] = {{'A', 'B', 'C', 'E'},
                        {'S', 'F', 'C', 'S'},
                        {'A','D','E','E'}};
    */

    char board[3][3] = {{'c', 'a', 'a'}, {'a', 'a', 'a'}, {'b', 'c', 'd'}};
    char *word = "aab";

    printf("%d\n", exist(board, 3, 3, word));
    return 0;
}
