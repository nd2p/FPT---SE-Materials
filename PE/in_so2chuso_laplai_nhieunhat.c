#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a[7];
	int i, j;
	for (i=0; i<7; i++){
		scanf ("%d", &a[i]);
	}
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
	
	int max;
	for (i=0; i<7; i++){
		int cnt=0;
		for (j=i+1; j<7; j++){
			if (a[i]>=10 && a[i]==a[j]){
				cnt++;
			}
		}
		if (cnt>max) max=cnt;
	}
	int count=0;
	for (i=0; i<7; i++){
		int cnt=0;
		for (j=i+1; j<7; j++){
			if (a[i]==a[j]) cnt++;
		}
		if (cnt==max && a[i]>=10){
			count++;
			printf ("%d ", a[i]);
		} 
	}
	if (count==0) printf ("no two-digit number");
	
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
