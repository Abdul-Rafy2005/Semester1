#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int randomnumber(){
       sleep(2);
       srand(time(NULL));
       return rand()%6+1;
}

  int main(){
  int a,b,sum1=0,sum2=0;
    char name1[20];
     char name2[20];
     
     printf("Welcome to the Dice Games!\n");
     
     printf("Player 1,please enter your name: ");
     fgets(name1,sizeof(name1),stdin);
     
     printf("Player 2,please enter your name: ");
     fgets(name2,sizeof(name2),stdin);
     
  int arr1[3];  
     for (int i = 0;i<3;i++){
         arr1[i]= randomnumber();
         sum1 += arr1[i];
      }
      
      
 printf("Rolling the dice for %s",name1);    
 
     for(int i =1;i <4;i++){
      a = arr1[i-1];
     printf("Dice %d: %d\n",i,a);
     }   
     
     
   int arr2[3]; 
   for (int j = 0;j<3;j++){
         arr2[j]= randomnumber();
           sum2 += arr2[j];
      } 
      
      
 printf("Rolling the dice for %s",name2);     
     for(int i =1;i <4;i++){
      b = arr2[i-1];
     printf("Dice %d: %d\n",i,b);
     }  
       

      
      printf("Calculating the total scores...\n");
         
            
      if (sum1 == 18 || sum2 == 18){
      
        if (sum1==18){
        sum1 = 0;
        }else{
        sum2=0;}
        }
        
         printf("Total score is %d: of %s",sum1,name1); 
         
         printf("Total score is %d: of %s",sum2,name2); 
          
       if (sum1>sum2){
       printf("Congratulations! the winner is... %s",name1);
       } else if (sum1<sum2){
       printf("Congratulations! And the winner is... %s",name2);
       }
       int count=0;
       if (sum1==sum2){
       
           for (int i=0;i<3;i++){
             if (arr1[i]>arr2[i]){
              printf("Congratulations! the winner is... %s",name1);
                  break;
             } else if (arr1[i]<arr2[i]){
            printf("Congratulations! the winner is... %s",name2);
                  break; }
              else {
                count+=1;
             }
          }
             if (count ==3){
             printf("Tie match.\n");}
         }
        
  return 0;
  }

