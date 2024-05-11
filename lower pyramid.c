// for downward Diamond
#include<stdio.h>
int main(){

 
   int row;
   char symboll;
   
   printf("Enter the  number of rows : ");
   scanf("%d",&row);
   
   printf("Enter the Symball : ");
   scanf(" %c",&symboll);
   
    for (int i = row; i >= 0 ;i--){
  
        for (int j = row - i;j >= 1;j--){
        
            printf(" ");   
     }
     
     for (int k = 0;k <= 2*i;k++){  
          printf("%c",symboll);}
           printf("\n");
   }


return 0;
}
