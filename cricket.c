#include<stdio.h>
float total_over(int balls,int *remain);



int main(){

int balls,remaining_ball;
int overs;
  printf("Enter the balls: ");
  scanf("%d",&balls);

 overs = total_over(balls,&remaining_ball);
 printf("the bowler has bowled %d over and %d balls\n",overs,remaining_ball);  
return 0;
}


float total_over(int balls,int *remain)
{ float overs;
  
   *remain = balls % 6;
   overs = (balls/6.0) ;
   
    return overs;  }
