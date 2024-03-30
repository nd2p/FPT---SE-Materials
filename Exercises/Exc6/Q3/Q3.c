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
	int a[n];
	int i;
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++){
		printf ("Element %d: ", i+1);
		scanf ("%d", &a[i]);
	}


    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    printf ("The even elements are: ");
    for (i=0; i<n; i++){
    	if (i%2==0){
    		printf ("%d ", a[i]);
		}
	}
	
	printf ("\nThe odd elements are: ");
    for (i=0; i<n; i++){
    	if (i%2!=0){
    		printf ("%d ", a[i]);
		}
	}


    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
