#include<stdio.h>
#include<math.h>
void boss(){
    int number,original_number,digit_1,digit_2,digit_3,digit_4,n=0;

    printf("Enter a number :  ");
    scanf("%d",&number);



    original_number = number;

    if(number==0 || number==1){
        printf("Armstrong number\n");
    } else if (number>= 100 && number <=999){
        n=3;
     digit_1 = number /100;
    number %= 100;
    digit_2 = number / 10;
     number %= 10;
     digit_3 = number;
     if (pow(digit_1,n) + pow(digit_2,n) + pow(digit_3,n) ==original_number){
         printf("Armstrong number\n");
     } else {
         printf(" Not a Armstrong number\n");}
     }
        if(number>= 1000 && number <=9999){
        n=4;
     digit_1 = number /1000;
    number %= 1000;
    digit_2 = number / 100;
     number %= 100;
    digit_3 = number / 10;
     number %= 10;
     digit_4 = number;
     if (pow(digit_1,n) + pow(digit_2,n) + pow(digit_3,n) + pow(digit_4,n) ==original_number){
         printf("Armstrong number\n");
     } else {
         printf(" Not a Armstrong number\n");}
        }
}

int main()
{
 boss();
 boss();
 boss();
 boss();
 boss();
 return 0;
}
