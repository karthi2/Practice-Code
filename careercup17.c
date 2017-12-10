#include <stdio.h>

void sortArray(int[] array){
    if(array==null){
        return;
	}

	for(int start = 0; start < array.lenth; start++){
        int max = 0;
        for(int i = start; i < array.lenth; i++){
  			if(array[i]>max){
				max=array[i];
			}
		}

		MoveToFront(array, max);
	}
}

int main () {
    int a[7] = {4, 3, 8, 5, 1, 6, 7};

    sort(a);
}
