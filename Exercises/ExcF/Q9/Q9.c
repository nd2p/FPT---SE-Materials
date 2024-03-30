#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n; 
	printf ("Input the number of elements to be stored in the array: ");
	scanf ("%d", &n);
	int a[n];
	int b[n];
	int i, j;
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++){
		printf ("Element %d: ", i+1);
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		b[i] = a[i];
	}

    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
	
	printf ("The elements stored in the first array are:\n");
	for (i=0; i<n; i++){
		printf ("%d ", a[i]);
	}
	printf ("\nThe elements stored in the second array are:\n");
	for (i=0; i<n; i++){
		printf ("%d ", b[i]);
	}
    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
