#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main(){
	int n;
	scanf ("%d", &n);
	int m=n;
	int a[n][m];
	int i, j;
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf ("%d", &a[i][j]);
		}
	}
	int max=-1e9;
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			if (i==j){
				if (a[i][j]>max){
					max = a[i][j];
				}
			}
		}
	}
	printf ("%d", max);
	return 0;
}
