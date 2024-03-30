#include<stdio.h>
#include<conio.h>
main(){
	int i, j, k, m;
	int n; 
	printf ("n=");
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		for (j=n; j>=i; j--) 
		    printf (" ");
		for (k=1; k<=i; k++) 
		    printf ("*");
		    printf ("\n");
	}
	//getch();
}
