#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check (char *s){
	int i;
	int length = strlen(s);
	for (i=0; i<length; i++){
    	if (s[i] != s[length-1-i]){
    		return 1; 
		}
	}
	return 0;
}
int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets (s);
	int i;
	
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE

	if (check(s)==1){
		printf ("-1");
	} else printf ("1");



    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
