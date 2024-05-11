#include<stdio.h>
int main(){
	int i=999;
	FILE *fptr;
	fptr =fopen("hello.txt","w");
	fprintf(fptr,"%d",i);
	fprintf(fptr,"\n Shahzad Hussain\n");
	fclose(fptr);
	FILE * ptr;
	ptr=fopen("hello.txt","r");
	char c;
	while ((c=fgetc(ptr))!=EOF){
		printf("%c",c);
	}
	fclose(ptr);
}
