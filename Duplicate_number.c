#include<stdio.h>
int main(){
    int number;
     number = 25;
      int arr[number];
     
  
   printf("Enter elements for array:\n");
   
   for (int i = 0;i < number ;i++){
          scanf("%d",&arr[i]);
               
         if (arr[i] < 10 || arr[i] > 100 ){
              printf("Invalid number.Again input number\n");
                  i--;  }      
               
           for (int j = 0; j < i  ; j--){
             if (arr[i] == arr[j]){
                printf("Duplicate number.Again input value\n");
                  i--; 
                  break;       
             }
          }
       }
  printf("The Unique elements are : ");  
    for(int k = 0;k < number ;k++){
         printf("%d  ",arr[k]);   
    }
      printf("\n");  
return 0;
}
