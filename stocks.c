#include<stdio.h>
int main(){
    //int min;
    int arr[6]={7,1,5,3,6,4};
    int min=arr[0];
    int current,i,j;
    int profit =0;
    int max=0;
      if 
      for (i=1;i<6;i++){
          current = arr[i];
          if (current<min){
              min = current;
              
          }
          if (current - min > max){
              max =current - min; 
          }
      }
    printf("Max profit is %d \n",max);
}
