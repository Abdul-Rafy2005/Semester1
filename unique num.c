#include<stdio.h>
int main(){`
    int arr1[6]={2,4,1,2,7,9};
    int counter,i,j;
    for (i=0;i<6;i++){
        counter=0;
        for (j=0;j<6;j++){
            if (i!=j && arr1[i]==arr1[j]){
                counter++;
                break;
            }
        }
        if (counter==0){
            printf("%d is unique \n",arr1[i]);
        }
    }
    
    
}
