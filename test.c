#include <stdio.h>
void bsort(int arr[], int size) {
	
	int i,j,a;
	a = 0;	
	
    for ( i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
        
       for (int k = 0; k < size;k++){
       if (arr[k] % 2 == 0 ){
         arr[a] = arr[k];
         a++;
       } 
   }
}

int main() {
    int arr[] = {6, 5, 3, 1, 8, 7, 2, 4,0,9};
    int size = 10;
	
	int i,ii;
      for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bsort(arr, size);

    printf("Bubble Sorted Array ");
    for ( ii = 0; ii < size; ii++) {
        printf("%d ", arr[ii]);
    }
    printf("\n");

    return 0;
}

