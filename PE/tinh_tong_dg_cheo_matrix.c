#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf ("%d", &n);
	int a[n][n];
	int i, j;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			scanf ("%d", &a[i][j]);
		}
	}
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    int sum=0;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (i==j) sum+=a[i][j];
		}
	}
	printf ("%d", sum);
	
	
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
