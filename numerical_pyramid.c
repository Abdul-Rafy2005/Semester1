#include<stdio.h>
int main (void){
int n,a,b;

 printf("Enter the number of rows : ");
 scanf("%d",&n);
 
 for (int i = 1; i <= n; i++){
      a = 1;
      b = i-1;
     for (int j = 1 ; j <= n; j++){
     if (j <= n - i){
     printf("  ");}
     else {
     printf("%d ",a); 
     a++;    }
        
     }
     for (int k = 1; k <= i-1; k++){
     printf("%d ",b);
     b--; }
 printf("\n");
 }
return 0;
}
