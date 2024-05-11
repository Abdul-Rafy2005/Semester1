#include<stdio.h>
int main()
{
    int n;
    int rem;
    int sum;
    int holder;
    printf("Enter the  number to check the number \n");
    scanf("%d",&n);
    
    
    while(sum!=1 && sum!=4){
        sum=0;
      while(n>0)
	  {
        rem = n%10;
        sum= sum + rem*rem;
        n = n/10;
      }
    n=sum;     
    }
   if (sum==1)
   {
       printf("Happy number \n");
   }
   else 
   {
       printf("Unhappy \n");
   }
    
}
