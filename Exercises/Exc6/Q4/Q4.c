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
	int i, j;
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++){
		printf ("Element %d: ", i+1);
		scanf ("%d", &a[i]);
	}


    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
	
	for (i=0; i<n; i++){
		int ctr=0;
		for (j=0; j<n; j++){
			if (i!=j){
				if (a[i]==a[j]){
					ctr++;
				} 
			}
		}
		if (ctr==0) printf ("%d ", a[i]);
	}


    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
