#include<stdio.h>
int main(){

   int n ;
   
   printf("Enter the number of rows : ");
   scanf("%d",&n);
   
   for (int a = 1; a <= n*2 + 1; a++){
         printf("* ");
   }
   printf("\n");
   for(int i = 1; i <= n ; i++){
   
      for(int j = 1; j <= n + 1 - i; j++){
       printf("* ");
      } 
      
      for (int space = 1 ; space <=i; space++){
      printf("  ");
      }
                                  
      for(int k = 1; k <= n; k++){              
        if (k <= i-1){                          
                                                
        printf("  ");}
        else {
        printf("* ");}
      }
      
   printf("\n");
   }

return 0;
}
