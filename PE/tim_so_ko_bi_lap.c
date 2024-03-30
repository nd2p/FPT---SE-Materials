#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf ("%d", &n);
    int a[n];
    int i, j;
    for (i=0; i<n; i++){
    	scanf ("%d", &a[i]);
	}
	
	int swap;
	for (i=0; i<n; i++){
    	for (j=i+1; j<n; j++){
    		if (a[i]>a[j]){
    			swap = a[i];
    			a[i]=a[j];
    			a[j]=swap;
			}
		}
	}
	
	for (i=0; i<n; i++){
		int cnt=0;
		for (j=0; j<n; j++){
			if (a[i]==a[j]) cnt++;
		}
		if (cnt==1) printf ("%d ", a[i]);	
	}
    return 0; 
}

