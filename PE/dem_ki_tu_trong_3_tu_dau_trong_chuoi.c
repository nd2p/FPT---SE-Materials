#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
  int i;
  char str[100];
  char * pch;
  gets(str);
  pch = strtok (str," ,.-");
  int cnt=0;
  int sum=0;
  while (pch != NULL)
  {
    cnt++;
    for(i=0; i<strlen(pch); i++){
      if(isalpha(pch[i])) sum++;
    }
    if (cnt==3) break;
    pch = strtok (NULL, " ,.-");
  }
  printf ("%d", sum);
  return 0;
}
