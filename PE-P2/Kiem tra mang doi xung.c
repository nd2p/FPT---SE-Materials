#include <stdio.h>
#include <stdbool.h>

void nhap(int *arr, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n < 20: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int ktra(int* arr, int n) {
	int i;
	for(i = 0; i <= n/2; i++) {
		if(arr[i] != arr[n - 1 - i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	if(ktra(arr, n)) {
		printf("1\n");
	} else {
		printf("0\n");
	}
	return 0;
}

