#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n, m; 
	printf ("Input the number of elements to be stored in the first array: ");
	scanf ("%d", &n);
	int a[n];
	int i, j;
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++){
		printf ("Element %d: ", i+1);
		scanf ("%d", &a[i]);
	}
	
	printf ("Input the number of elements to be stored in the second array: ");
	scanf ("%d", &m);
	int b[m];
	printf ("Input %d elements in the array:\n", m);
	for (i=0; i<n; i++){
		printf ("Element %d: ", i+1);
		scanf ("%d", &b[i]);
	}
    
    int c[n+m];

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
	int swap;
	for (i=0; i<n; i++){
		c[i]=a[i];
	}
	for (i=n; i<n+m; i++){
		c[i]=b[i-n];
	}
    for (i=0; i<n+m; i++){
    	for(j=i+1; j<n+m; j++){
    		if (c[i] < c[j]){
    			swap = c[i];
    			c[i] = c[j];
    			c[j] = swap;
			}
		}
	}

	for (i=0; i<n+m; i++){
    	printf ("%d ", c[i]);
	}
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
