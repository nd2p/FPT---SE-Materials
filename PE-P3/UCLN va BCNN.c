#include<stdio.h>

int main()
{
	int a, b;
	printf ("Nhap a=");
	scanf ("%d", &a);
	printf ("Nhap b=");
	scanf ("%d", &b);
	if (a>=0 && b>=0){
		if (a==0 && b==0){
			printf ("Khong co UCLN va BCNN\n");
		}else if (a==0 || b==0){
			printf ("Khong co BCNN, UCLN=%d\n", (a==0)?b:a);
		}else{
			int bc=a*b;
			while (a!=b){
				if (a>b){
					a=a-b;
				}else{
					b=b-a;
				}
			}
			printf ("UCLN=%d\n", a);
			printf ("BCNN=%d\n", bc/a);
		}
		
	}else{
		printf ("Chuong trinh ket thuc, hay nhap lai");
	}
	return 0;
}

