#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets (s);
	int length = strlen(s);
	int i;
	
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
	for (i=1; i<=length; i++){
		if (i%3!=0){
			printf ("%c", s[i-1]);
		}
		if (i%3==0){
			if (i!=length){
				printf ("%c_", s[i-1]);
			} else printf ("%c", s[i-1]);
		}
	}
    


    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
