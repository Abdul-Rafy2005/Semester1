// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n,sum = 1;
    printf(" enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0; i <= n - 1;i++){      
      scanf("%d\n",&arr[i]);    
      sum *= arr[i];
    }
     printf("%d ",sum);
    return 0;
}
