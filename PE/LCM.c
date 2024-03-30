#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int gcd (int a, int b){
	if (a < b){
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	int result;
	int i;
	for (i = 1; i <= b; i++){
		if (a % i == 0 && b % i == 0) result = i;
	}
	return result;
}

int lcm (int a, int b){
	return a*b/gcd(a, b);
}

int main(){
		int a, b;
	do{
		scanf ("%d %d", &a, &b);
	} while (a < 0 && b < 0);
	printf ("LCM:%d", lcm(a, b));
	return 0;
}
