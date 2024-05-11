// matrix to find lowest number
#include<stdio.h>
int main(){

   int row,column;
        row = 4;
        column = 3;
        printf("Welcome\n");
  int arr[row][column];
  for (int i = 0;i<row;i++){
     for (int j =0;j<column;j++){
     
          printf("Enter the number you want in  rows %d column %d : ",i+1,j+1);
          scanf("%d",&arr[i][j]);
     }
  
  }
int small_number;
small_number = arr[0][0];
   for (int i = 0;i<row;i++){
     for (int j =0;j<column;j++){
     
      if(small_number >= arr[i][j]){
            small_number = arr[i][j];  
                 
        }
     } 
  }
  
  printf("the smallest number is %d\n",small_number);
return 0; 
}

// for transpose of Matrics


#include<stdio.h>
int main(){
 
  int row,column;
  
   printf("Enter the number of rows: ");  
   scanf("%d",&row);
    
    for (int i = 0;i<2;i++ ){
   printf("Enter the number of columns: ");  
   scanf("%d",&column);
   if (column==row){
   break;}
    printf("Matrix must be square so enter again\n"); 
   i--;
   }
   
  int arr[row][column];
  for (int i = 0;i<row;i++){
     for (int j =0;j<column;j++){
     
          printf("Enter the number you want in  rows %d column %d : ",i+1,j+1);
          scanf("%d",&arr[i][j]);
     }
  
  }
  
   printf("your given Matrics is: \n"); 
  for (int i = 0;i<row;i++){
     for (int j =0;j<column;j++){
     
          printf("%d ",arr[i][j]);
          
     }
  printf("\n");
  }
  
  printf("Its transpose Matrics is: \n"); 
  for (int j = 0;j<column;j++){
     for (int i =0;i<row;i++){
     
          printf("%d ",arr[i][j]);
          
     }
  printf("\n");
  }
 
  
  
return 0;
}






// for Sum of row Series of Matrix 

#include<stdio.h>
int main(){
 
  int row,column;
   row = 3;
   column = 3;
   
  int arr[row][column];
  for (int i = 0;i<row;i++){
     for (int j =0;j<column;j++){
     
          printf("Enter the number you want in  rows %d column %d : ",i+1,j+1);
          scanf("%d",&arr[i][j]);
     }
  
  }
  
   printf("The Matrics is: \n"); 
  for (int i = 0;i<row;i++){
     for (int j =0;j<column;j++){
     
          printf("%d ",arr[i][j]);
          
     }
  printf("\n");
  }
  int sum;
  printf("The sum of rows of the matrix is: \n"); 
  for (int i = 0;i<row;i++){
      sum = 0;
     for (int j =0;j<column;j++){
         sum += arr[i][j];      
     }
       printf("Row %d: %d\n",i+1,sum);
  }
  
  
return 0;}


// for data of different students
#include<stdio.h>
int main(){
 
  int number;
 
  for (int i = 0;i<1;i++){
  printf("Enter number of students: ");
  scanf("%d",&number);
  if (number<1){
  printf("Inappropriate Input.\n");
   i--;}
  }
  
  char Student_name[number][50];
  char Father_name[number][50];
  int Class[number];
  int Student_number[number];
  
  for (int i=0;i<number;i++){
    
    
     
     printf("Enter student number: ");
     scanf("%d",&Student_number[i]);
    
      printf("Enter student name: ");
     getchar(); 
     fgets(Student_name[i],sizeof(Student_name[i]),stdin);

     int j = 0;
        while (Student_name[i][j] != '\0') {
            if (Student_name[i][j] == '\n') {
                Student_name[i][j] = '\0';
                break;
            }
            j++;
        }
   
    printf("Enter father's name: ");
    fgets(Father_name[i],sizeof(Father_name[i]),stdin);
  
 j = 0;
        while (Father_name[i][j] != '\0') {
            if (Father_name[i][j] == '\n') {
                Father_name[i][j] = '\0';
                break;
            }
            j++;
        }
    
     printf("Enter class: ");
     scanf("%d",&Class[i]);
    
    
  }
  
  printf("Student Number | Name \t| Father's Name | Class\n");
  for (int j = 0;j<= 45;j++){printf("_");}
  
  printf("\n\n");
  
 for (int class_number = 1; class_number <= 12; class_number++) { 
  for (int i=0;i<number;i++){ 
       if(Class[i] == class_number){ 
     printf("%d\t    |%s\t|%s\t|%d\n",Student_number[i],Student_name[i],Father_name[i],Class[i]);
   }
  }
 } 
return 0;
}




// for  multiplication of matrix 

#include<stdio.h>
int main(){
 
  int row1,column1,row2,column2;
  
  for (int i = 1;i<=1;){
  
   printf("Enter the number of rows for first Matrics: ");  
   scanf("%d",&row1);
     
   printf("Enter the number of columns for first Matrics: ");  
   scanf("%d",&column1); 
   
   
     for (int j = 1;j<=1;){
     
     
       printf("Enter the number of rows for Second Matrics: ");  
   scanf("%d",&row2);
     
   printf("Enter the number of columns for Second Matrics: ");  
   scanf("%d",&column2);
   
       if (row2 == column1){
       break;
        }
       printf("The number of row of second Matrics is not eqaul to number of column of first Matrics:\n");  
     }
     if (row2 == column1){
       break; }
   }
   
   
  
  printf("First Matrics: \n"); 
  int arr1[row1][column1];
  for (int i = 0;i<row1;i++){
     for (int j =0;j<column1;j++){
     
          printf("Enter the number you want in rows %d column %d : ",i+1,j+1);
          scanf("%d",&arr1[i][j]);
     }
  
  }
  
   
 printf("Second Matrics: \n");
     int arr2[row2][column2]; 
  for (int i = 0;i<row2;i++){
     for (int j =0;j<column2;j++){
     
          printf("Enter the number you want in rows %d column %d : ",i+1,j+1);
          scanf("%d",&arr2[i][j]);
     }
  
  }
  
  printf("Your first Matrics is: \n"); 
  for (int i = 0;i<row1;i++){
     for (int j =0;j<column1;j++){
     
          printf("%d ",arr1[i][j]);
          
     }
     
  printf("\n");
  }
   printf("Your Second Matrics is: \n"); 
  for (int i = 0;i<row2;i++){
     for (int j =0;j<column2;j++){
     
          printf("%d ",arr2[i][j]);
          
     }
     
  printf("\n");
  }
  
  int arr3[row1][column2];

 for (int i = 0;i<row1;i++){
     for (int j =0;j<column2;j++){
          arr3[i][j] = 0;
     for (int k = 0;k<column1;k++){
       arr3[i][j] += arr1[i][k] * arr2[k][j];
     }        
    }
  }
  
 printf("Your Third Matrics is: \n"); 
   for (int i = 0;i<row1;i++){
     for (int j =0;j<column2;j++){
     
          printf("%d ",arr3[i][j]);
    }
   printf("\n");  
  }
return 0;
}

