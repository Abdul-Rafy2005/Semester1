#include<stdio.h>

double pi(int term); // Function Declaration / Prototype

int main(void){
    
    // initializing of variables 
     int  term,i;
    double Appro_value = 0.0;
    
  do{  // asking user to input a value and value should be correct
    printf("Enter the number of Terms: "); 
    scanf("%d",&term);
    i = 1;
    if (term < 0){
    i--;
    printf("You Input the wrong value(must be greater or equal to zero):\n");
    continue;  }
    i++;
    } while (i<2);
    
    // calling function and assigning its value to a variable
    Appro_value = pi(term);
    
    // printing the final result
    printf("the approximate value of Pie is: %lf\n",Appro_value);
    
return 0;}


 // Function Definition/Implementation
    double pi(int term){
    
    // initializing local variables 
   double First_value  = 3.0;
   int sign = 1;
   double sum = 0.0;
   double numerator = 4.0;
   
   // starting loop to achieve approxiamte value 
    for(int i=2;i <= 2*term;i+=2){
        
         sum += sign *(numerator/((i)*(i+1)*(i+2)));
         sign *= -1;
    }
    
    // finishing final result 
    sum += First_value;
    
    // result 
    return sum;
}
