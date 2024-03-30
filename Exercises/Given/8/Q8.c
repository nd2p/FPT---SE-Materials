#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n, i;
	scanf ("%d", &n);
	int a[n];
	
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int min = 1e9;
	for (i=0; i<n; i++){
		if (a[i]<min) min = a[i];
	}


    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    int min2nd = 1e9;
	for (i=0; i<n; i++){
		if (a[i]>min)
		{
			if (a[i]<min2nd) min2nd = a[i];
		}
	}
	printf ("%d", min2nd);

    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
