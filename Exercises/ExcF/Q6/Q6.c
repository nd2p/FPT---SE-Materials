#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n; scanf ("%d", &n);
	int a[n];
	int i; 
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int sum = 0;

    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
	for (i=0; i<n; i++){
		if (a[i]>0 && a[i]%2!=0){
			sum += a[i];
		}
	}
	printf ("%d", sum);

    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
