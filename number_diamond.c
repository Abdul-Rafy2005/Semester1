#include <stdio.h>

int main() {

    int i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &k);
    
     int number = 0;
    
    for (i = 1; i <= k; i++) {
   
        for (j = k; j >= 1; j--) {
        
            if (i >= j)
                printf("%d ",number);
            else
                printf(" ");
        }
        
        printf("\n");
         number++;
    }

  number -= 2; 
    for (i = k - 1; i >= 1; i--) {
    
        for (j = k; j >= 1; j--) {
    
            if (i >= j)
                  printf("%d ",number);
            else
                printf(" ");
        }
        printf("\n");
    
        number--;
    }

    return 0;
}

