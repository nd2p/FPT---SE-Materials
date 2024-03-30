#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	int n; 
	scanf ("%d", &n);
	char s[n][100];
	int i, j; 
	
	for (i=0; i<n; i++){
		scanf ("%s", s[i]);
	}
	
	char c, C;
	scanf (" %c", &c);
	if (c >= 'a' && c <= 'z'){
		C = c - 32;
	} else if (c >= 'A' && c <= 'Z') {
		C = c + 32;
	}
	
	for (i=0; i<n; i++){
		for (j=0; j<strlen(s[i]); j++){
			if (s[i][0] == c || s[i][0] == C ){
				printf ("%s ", s[i]);
				break;
			}
		}
	}
}
