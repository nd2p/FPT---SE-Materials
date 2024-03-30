#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
#include <stdio.h>

	int n, i, j, k;
	scanf ("%d", &n);
	

    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    for (i=0; i<n+n-1; i++){
		printf ("*");
	}
	printf ("\n");

	for (i=0; i<n-1; i++){
		for (j=0; j<=i; j++){
			printf (" ");
		}
		printf ("*");
		for (k=(n-1)*2-3; k>i*2; k--){
			printf (" ");
		}
		if (i!=n-2) printf ("*");
		printf ("\n");
	}


    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
