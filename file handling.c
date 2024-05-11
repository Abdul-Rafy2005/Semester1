#include<stdio.h>
FILE *ptr;
int main(){
    char name[] = "abdul rafy";
    char roll[] = "23p-0560";
    float cgpa = 3.4; 
    
   ptr = fopen("firstfile.txt","w");
    fprintf(ptr,"name: %s\nroll number: %s\ncgpa: %f\n",name,roll,cgpa);
   fclose(ptr);

       ptr = fopen("//home//rafay//firstfile.txt", "r");
       if (ptr != NULL){
       char c;
       while((c = fgetc(ptr)) != EOF) printf("%c",c);       
       } 
     
return 0;
}
