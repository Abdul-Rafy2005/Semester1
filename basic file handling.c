// Question No 2

#include <stdio.h>

void print_name();

FILE *ptr;
int main() {
    

    ptr = fopen("names.txt", "w");
    char name[40];
    if (ptr == NULL) {
        printf("Error opening the file.\n");
        return -1;
    }

    while (fgets(name, sizeof(name), stdin) != NULL) {
        if (name[0] == '\n') {  
            break;
        }
        fprintf(ptr, "%s", name);
    }

    fclose(ptr);


// Part No. 1

    printf("\nFirst four character of each name\n");
    ptr = fopen("names.txt", "r");

    if (ptr != NULL) {
        char buffer[20];
        while ((fgets(buffer, sizeof(buffer), ptr)) != NULL) {
            printf("%.4s\n", buffer);
        }
        fclose(ptr);
    }

// Part No. 2
     printf("\n\n");
     ptr = fopen("names.txt", "r");

    if (ptr != NULL) {
    
        char Buffer[20];
        int length = 0;

        while (fgets(Buffer, sizeof(Buffer), ptr) != NULL) {
            for (int i = 0; Buffer[i] != '\n'; i++) {
                length++;
                 }
         }
        printf("Total length: %d\n",length);
      fclose(ptr);
  }
    
// Part No. 3
    printf("\n\n");
    print_name();
    
    return 0;
}


void print_name(){

  int length;


   ptr = fopen("names.txt", "r");
 
   printf("Enter size: ");
   scanf("%d",&length);
   
    if (ptr != NULL) {
    
        char Buffer[20];
        int Length;

        while (fgets(Buffer, sizeof(Buffer), ptr) != NULL) {
                   Length = 0;
            for (int i = 0; Buffer[i] != '\n'; i++) {
                Length++;
                 }
         if (length == Length)  printf("%s",Buffer);        
         }
      
      fclose(ptr);
  }


}
