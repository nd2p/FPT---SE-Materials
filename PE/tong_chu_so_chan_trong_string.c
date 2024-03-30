#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main(){
	char s[100];
	gets(s);
	int i;
	int sum=0;
	for (i=0; i<strlen(s); i++){
		if (isdigit(s[i])){
			if (s[i]%2==0){
				sum+=s[i]-'0';
			}
		}
	}
	printf ("%d", sum);
	return 0;
}
