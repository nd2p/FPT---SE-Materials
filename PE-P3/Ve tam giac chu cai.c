#include<stdio.h>
#include<conio.h>
main(){
	int kytu=65; //65 l� m� ASCII cua chu c�i A
	int i, j, k, m;
	int n; 
	printf ("n=");
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		for (j=n; j>=i; j--) 
		    printf (" ");
		for (k=1; k<=i; k++) 
		    printf ("%c", kytu++);
		    kytu--;
		for (m=1; m<i; m++)
		    printf ("%c", --kytu);
		    printf ("\n");
		    kytu=65;
	}
	//getch();
}
