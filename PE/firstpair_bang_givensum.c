#include <stdio.h>

int main(){
	int n; 
	scanf ("%d", &n);
	int a[n];
	int i, j;
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int sum;
	scanf ("%d", &sum);
	int cnt=0;
	for (i=0; i<n; i++){
		for (j=i+1; j<n; j++){
			if (a[i]+a[j]==sum){
				printf ("%d\n%d", a[i], a[j]);
				cnt++;
				break;
			}
		}
		if (cnt!=0) break;
	}
	return 0;
}
