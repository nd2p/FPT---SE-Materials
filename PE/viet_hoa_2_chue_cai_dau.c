#include <stdio.h>

int main (){
	char str[100];
	int i;
	gets(str);
	char * pch;
	pch = strtok (str," ,.-");
	while (pch != NULL)
	{
    	for (i=0; i<2; i++){
    		if (pch[i]>='a' && pch[i]<='z'){
    			pch[i]-=32;
			}
		}
		printf ("%s ", pch);
    	pch = strtok (NULL, " ,.-");
	}
	
	return 0;
}
