
#include <stdio.h>

int main() {
    int size;
    int i,j;
    int sum;
    printf("Enter the size of matrix \n");
    scanf("%d",&size);
    int arr[size][size];
    printf("Enter the elements of array \n");
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            printf("Element - [%d][%d] \n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int m = size;
    printf("The matrix is : \n");
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
   //for upper triangle to be zero
   for (i=0 ;i<size;i++){
       for (j=i+1 ;j<size;j++){
           arr[i][j]=0;
       }
   }
      
    for (i=0;i<size ;i++){
        for (j=0;j<size;j++){
            printf("%d  ",arr[i][j]);
        }printf("\n");
    }

    return 0;
}
