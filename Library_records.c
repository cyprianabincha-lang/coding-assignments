/*Name cyprian Abincha
Reg No PA106/G/28791/25
*/
#include <stdio.h>

int main(){
	char book_name[50];
	FILE *fptr;
	
	fptr=fopen("C:\\Users\\admin\\Downloads\\Documents\\borrowed_books.txt","a");
	
	printf("enter name of the book borrowed:\n");
	scanf("%s",book_name);
	
	fprintf(fptr,"the librarian entered book name:%\n",book_name);
	
	fclose(fptr);
	
	printf("the result has been stored in borrowed_books.txt.\n");
	
	return 0;
}