#include<stdio.h>
#include<ctype.h>

int main()
{
	char TestChar;
	printf("\n Check whether a letter is lowercase or not :\n");  
    printf("------------------------------------------------\n");      
    printf(" Input a character : "); 
    scanf( "%c", &TestChar );
	if( islower(TestChar) )
		printf( " The entered letter is a lowercase letter. \n" );
	else
		printf( " The entered letter is not a lowercase letter. \n" );
	return 0;
}