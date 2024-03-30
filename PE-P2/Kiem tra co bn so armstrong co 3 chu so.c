#include<stdio.h>
main(){
	int a, b, c, abc, count=0;
	scanf("%d", &a);

	
	for (a=1; a<=9; a++)
	for (b=0; b<=9; b++)
	for (c=0; c<=9; c++)
	if (100*a+10*b+c==a*a*a+b*b*b+c*c*c)
	{
		printf ("%d", a);
		count++;
	}
	printf ("\nso cac so arm la %d", count);
}
