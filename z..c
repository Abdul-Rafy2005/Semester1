#include <stdio.h>

int main() {
  int n,a;
  
  printf("Enter the number of rows : ");
  scanf("%d",&n);
  a = 1;
  for (int i = 1 ; i <= n ; i++){
      for (int j = 1; j <= n ; j++){
          if (i == 1 || i == n || j == n + 1- i){
              printf("* ");}
              else {
                 printf("  ");  
              }
          }
     
      printf("\n");
  }
    return 0;
}
