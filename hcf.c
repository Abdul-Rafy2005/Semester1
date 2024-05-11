#include <stdio.h>


int main() {
    int num1, num2;
    printf("enter number 1\n " );
    scanf("%d",&num1);
printf("Enter second number \n");
scanf("%d",&num2);
int a=num1;
int b=num2;
    
    while(num1 !=num2){
    	if (num1>num2){
    		num1=num1-num2;
		}
		else {
			num2 = num2-num1;
			
		}
		
	}
	int hcf = num1;
	
	int lcm = (a*b)/hcf;
	printf("Hcf is %d \n",  hcf);
printf("Lcm is %d\n",lcm);
 
}
