#include<stdio.h>
void Length(char *ptr,int *length){   
     while (*ptr != '\0'){
         (*length)++;
         ptr++;
      } 

}
int main(){

  char *ptr,name[20];
  int  length = 0;
   
    printf("Enter your name: ");  
    fgets(name,sizeof(name),stdin);
    ptr = name;
      
      
     int j = 0;
        while (name[j] != '\0') {
            if (name[j] == '\n') {
                name[j] = '\0';
                break;
            }
            j++;
        }  
    Length(ptr,&length);
    printf("the string (%s) length is %d\n",name,length);       

return 0;
}
