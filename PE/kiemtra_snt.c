#include <stdio.h>
#include <string.h>
#include <math.h>

int check(int n)
{
	if (n < 2) {
		return 1;
	} else {
		int i;
		int mark = 1;
		for (i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				mark = 0;
				break;
			}
		}
		if (mark == 1) {
			return 0;
		} else {
			return 1;
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	for (i = 0; i < n; i++) {
		if (check(a[i]) == 0) {
			printf("%d ", a[i]);
			cnt++;
		}
	}
	if (cnt == 0)
		printf("No prime number exists");

	return 0;
}

