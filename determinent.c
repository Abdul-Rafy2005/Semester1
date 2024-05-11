	#include<stdio.h>
	int main(){
	  int arr[3][3];
	  int i,j,k;
	  printf("Enter the elements of array \n");
	  for (i=0;i<3;i++){
	  	for (j=0;j<3;j++){
	  		
	  		printf("Enter element [%d][%d] \n",i,j);
	  		scanf("%d",&arr[i][j]);
	  		
		  }
	  }
	  
	  for (i=0;i<3;i++){
	  	for (j=0;j<3;j++){
	  		printf("%d \t",arr[i][j]);
	  		
		  }
		  printf("\n");
		  
	  }
	  int determient=0;
	  for (i=0;i<3;i++){
	   determient= determient+(arr[0][i]*(arr[1][(i+1)%3]*arr[2][(i+2)%3]-arr[1][(i + 2)%3]*arr[2][(i + 1)%3]));
	  }
	  
	  printf("Determinent of the matrix is %d \n",determient);
	  
	  }
	  

