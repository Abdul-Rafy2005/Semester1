#include<stdio.h>
void Copy(char *ptr1,char *ptr2){

      while (*ptr1 != '\0'){
         *ptr2 = *ptr1;
         ptr1++;
         ptr2++;
      } 
      *ptr2 = '\0';
}
int main(){
  char arr1[20],arr2[20];
  char *ptr1,*ptr2;
  
  printf("Enter that you want in array: ");  
  fgets(arr1,sizeof(arr1),stdin);
  
  int j = 0;
        while (arr1[j] != '\0') {
            if (arr1[j] == '\n') {
                arr1[j] = '\0';
                break;
            }
            j++;
        }
 
    
  ptr1 = arr1;
  ptr2 = arr2;
  Copy(ptr1,ptr2);
  
  printf("Orignial String: %s\n",arr1);  
  printf("Copy String: %s\n",arr2);
    
return 0;
}
