
#include <stdio.h>
#include<string.h>
#include<math.h>

int main (){
    char s[100];
    gets(s);
    char c;
    scanf ("%c", &c);
    int i;
    int cnt=0;
    for (i=0; i<strlen(s); i++){
        if (s[i]==c){
            s[i]='X';
            cnt++;
    	}
	}
    if (cnt==0){
    	printf ("Character '%c' not found", c);
	} else puts(s);
    return 0;
}

