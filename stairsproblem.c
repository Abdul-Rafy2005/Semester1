#include<stdio.h>
int main(){
	int first=1;
	int second =2;
	int sum =0;
	int terms;
	int i;
	int next =0;
	
	printf("Enter the  number of stairs \n");
	scanf("%d",&terms);
	
	
		if (terms<=2){
			next = terms;
			
		
		}else {
		
	for (i=3;i<terms;i++){
	
	
			next = first + second;
			first = second;
			second = next;
			sum = sum + next;
		

		
	}
}
	printf ("\n %d",next);
}
