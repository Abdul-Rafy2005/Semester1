#include<stdio.h>
int multiply(int number);
int main(){
   int number;
    
   printf("Enter the number: ");
    scanf("%d",&number);

  printf("\n%d\n", multiply(number));     
     
return 0;
}
int multiply(int number){
int count,digit,new_number,copy;
copy = number;
count = 1;

new_number = 2;

if (number >= -9 && number <= 9){
digit = 1;
   for (int i = 0; new_number == 0;i++){
   new_number = number/10.0;
   number = number % 10;
   ++digit;
   
   
   }
    for (int j = 0; j<digit;j++){
    count *= 5;
   }
 }  else if (number >= -99 && number <= 99){
 digit = 1;
 
    for (int i = 0; new_number == 0;i++){
     new_number = number/10;
     number %= 10;
     ++digit;
   
   }
    for (int j = 0; j<=digit;j++){
    count *= 5;
   }
 
 } else if (number >= -999 && number <= 999){
        digit = 1;
    for (int i = 0; new_number == 0;i++){
     new_number = number/10;
     number %= 10;
     ++digit;
   
   }
    for (int j = 0; j<=digit+1;j++){
    count *= 5;
   }
 
 }
 else if (number >= -9999 && number <= 9999){
        digit = 1;
    for (int i = 0; new_number == 0;i++){
     new_number = number/10;
     number %= 10;
     ++digit;
   
   }
    for (int j = 0; j<=digit+2;j++){
    count *= 5;
   }
 
 }
 else if (number >= -9999 && number <= 9999){
        digit = 1;
    for (int i = 0; new_number == 0;i++){
     new_number = number/10;
     number %= 10;
     ++digit;
   
   }
    for (int j = 0; j<=digit+3;j++){
    count *= 5;
   }
 
 }
 
 else if (number >= -99999 && number <= 99999){
        digit = 1;
    for (int i = 0; new_number == 0;i++){
     new_number = number/10;
     number %= 10;
     ++digit;
   
   }
    for (int j = 0; j<=digit+4;j++){
    count *= 5;
   }
 
 }
 else if (number >= -999999 && number <= 999999){
        digit = 1;
    for (int i = 0; new_number == 0;i++){
     new_number = number/10;
     number %= 10;
     ++digit;
   
   }
    for (int j = 0; j<=digit+5;j++){
    count *= 5;
   }
 
 }
 else if (number >= -9999999 && number <= 9999999){
        digit = 1;
    for (int i = 0; new_number == 0;i++){
     new_number = number/10;
     number %= 10;
     ++digit;
   
   }
    for (int j = 0; j<=digit+6;j++){
    count *= 5;
   }
 
 }
new_number = copy*count;
return new_number;
}
