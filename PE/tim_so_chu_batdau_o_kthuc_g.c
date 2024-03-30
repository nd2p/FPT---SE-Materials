#include <stdio.h>
#include <string.h>



int main ()
{
	int i;
	int cnt=0;
  	char str[100];
  	gets (str);
  	char * pch;
  	pch = strtok (str," ,.-");
  	while (pch != NULL)
  	{
    	for (i=0; i<strlen(pch); i++){
    		if (pch[i]=='s' && pch[strlen(pch)-1]=='g'){
    			cnt++;
			}
		}
    	pch = strtok (NULL, " ,.-");
  	}
  	printf ("%d", cnt);
  
  
  
  return 0;
}
