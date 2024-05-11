#include <stdio.h>

int main() {
    int arr[2][2]={1,4,2,5};
    int sum=0;
    int i,j;
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            if (i==j){
            sum = sum + arr[i][j];    
            }
        }
    }
    printf("Sum of right diagnol is %d \n",sum);

    return 0;
}
