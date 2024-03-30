#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n; 
	printf ("Input the number of elements to be stored in the first array: ");
	scanf ("%d", &n);
	int a[n], b[n];
	int i, j;
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++){
		printf ("Element %d: ", i+1);
		scanf ("%d", &a[i]);
	}
	int index;
	printf ("Input index: ");
	scanf ("%d", &index);
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    for (i=0; i<index; i++){
    	printf ("%d ", a[i]);
	}
	
	for (i=index; i<n; i++){
		b[i-index]=a[i];
 	}
	
	for (i=n-index-1; i>=0; i--){
		printf ("%d ", b[i]);
	}
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
