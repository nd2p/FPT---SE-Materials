#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf ("%d", &n);
	int i, sum, rs;
	sum = 0;
	rs = 0;
	i = 1;
	
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    for (i=1; i<n; i++){
    	sum += i;
    	if (sum>=n) break;
	}
	printf ("%d", i-1);

    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
