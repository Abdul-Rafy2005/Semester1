// Question No 3

#include <stdio.h>

FILE *ptr,*ptr1;
int main() {
    
    ptr = fopen("names.txt", "w");
    ptr1 = fopen("name_subject.txt","w");
    
    if (ptr == NULL || ptr1 == NULL) {
        printf("Error opening files.\n");
        return -1;
    }
    
    char name[40];
    while (fgets(name, sizeof(name), stdin) != NULL) {
        if (name[0] == '\n') {  
            break; }
      fprintf(ptr, "%s", name); }
      fclose(ptr);
    
    
    ptr = fopen("names.txt", "r");
    
    int length,Length;
    char subject[] = "Programming Fundamentals,Calculus,English Composition";
    
    while(fgets(name, sizeof(name), ptr) != NULL){
    
       Length = 0;
            for (int i = 0; name[i] != '\0'; i++) {
                Length++;
                 }                   
                         
        
        if (name[Length - 1] == '\n') {
            name[Length - 1] = '\0';
        }
       
     fprintf(ptr1, "%s,%s\n", name, subject);
     
    }
    
    fclose(ptr);
    fclose(ptr1);
   
   ptr1 = fopen("name_subject.txt","r");
   
   char c;
                while ((c = fgetc(ptr1)) != EOF) {
                printf("%c", c);
                }
   fclose(ptr1);
      
    return 0;
}

