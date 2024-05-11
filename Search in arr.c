#include<stdio.h>
int main(){

   int count,number;
    count = 0;
   printf("Enter element to search in array\n[");
   int arr[9];
   
   for (int i = 0;i <= 8 ;i++){
            scanf("%d",&arr[i]); 
         if (i==8){
            printf("] : ");
             scanf("%d",&number);
        }
     }
    
   for (int k = 0; k <= 8 ; k++){
             
            if (number == arr[k]){
              count += 1; }
       }   
       
          if(count != 0){     
        printf("Element %d found %d time\n",number,count);   
         } else if (count == 0){
         printf("Element not found\n");}
         
   
              
return 0;
}
