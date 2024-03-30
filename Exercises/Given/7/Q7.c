#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check(int n){
	int i;
	for (i=2; i<n; i++){
		if (n%i==0) return 1;
	}
	return 0;
}


int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n, i;
	scanf ("%d", &n);
	int a[n];
	
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int count = 0;



    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    for (i=0; i<n; i++){
		if (check(a[i])==0){
			printf ("%d", a[i]);
			break;
		} else count++;
		if (count == 10) printf ("-1");
	}



    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
