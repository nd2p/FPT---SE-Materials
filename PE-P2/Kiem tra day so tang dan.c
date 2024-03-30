#include <stdio.h>

int main()
{
	int a[1000], n, b, i = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	int dem = 0;
	for (i=0; i<n; i++){
		if (a[i]>a[i+1]){
			dem++;
		}
	}
	if(dem == 0){
		printf("La day so tang dan");
	} else printf("Khong phai day so tang dan");
		
	return 0;
}
