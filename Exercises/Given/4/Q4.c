#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf ("%d", &n);

    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    if (n<=16)
    {
    	printf ("Freezing mode");
	} else if (n<=22)
	{
		printf ("Cold mode");
	} else if (n<=27)
	{
		printf ("Cool mode");
	} else 
	{
		printf ("Room mode");
	}



    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
