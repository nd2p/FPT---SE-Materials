#include<math.h>
#include<stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}

	int swap;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (a[j]%2==0 && a[j+1]%2!=0){
				swap = a[j];
				a[j] = a[j+1];
				a[j+1] = swap;
			} else if (a[j]%2!=0 && a[j+1]%2!=0 && a[j] < a[j+1]){
				swap = a[j];
				a[j] = a[j+1];
				a[j+1] = swap;
			}else if (a[j]%2==0 && a[j+1]%2==0 && a[j] < a[j+1]){
				swap = a[j];
				a[j] = a[j+1];
				a[j+1] = swap;
			}
		}
	}
	for (int i=0; i<n; i++){
		printf ("%d\n", a[i]);
	}
	return 0;
}