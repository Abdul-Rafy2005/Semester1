#include<stdio.h>//fabinocci series
int main(){
	int i;
	int sum=0;
	int terms;
	int nextNum;
	int fst =0;
	int sec=1;
	printf("Enter the terms of series \n");
	scanf("%d",&terms);
	for (i=0;i<terms;++i){
		if (i<=1){
			nextNum=i;
			sum = sum + nextNum;
		printf("%d ",nextNum);
		}
		else {
		nextNum = fst + sec;
		fst = sec;
		sec = nextNum;
		printf("%d ",nextNum);
sum = sum + nextNum;
    }
	}
printf("Sum of fibancci series is %d \n",sum);	
	
}
