/*
 * Routine to move all non zero integers to the end of the array
 */

void movetoend (int *arr, int len) {
    int i = 0;
    int j = len - 1;

    while (i <= j) {
        while (arr[i] == 0) {
            i++;
        }

        while (arr[j] != 0) {
            j--;
        }

        swap(arr[i], arr[j]);
    }
}
