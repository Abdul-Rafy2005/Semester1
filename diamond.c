#include<stdio.h>
int main (void){
int n,number_space,number_star,mid_line;

 printf("Enter the number of rows : ");
 scanf("%d",&n);
 
 number_star = 1;
number_space = n/2;
 mid_line = n/2 + 1;
 
 for (int i = 1; i <= n; i++){
     
      for (int j = 1; j <= number_space; j++){
      
          printf("  ");
      }
 
      for (int k = 1;k <= number_star; k++){
      
          printf("* ");
      }
 if (i < mid_line){
    number_space--;
    number_star += 2; 
 } else {
    number_space++; 
    number_star -= 2; 
 }
    printf("\n");
 }
   return 0;
   }    
     
