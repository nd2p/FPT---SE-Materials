#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");int i,j,n;
	printf("Nhap n = ");scanf("%d", &n);
	int a[n];
	for ( i =0 ; i<n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
  	int tg;
  	for( i = 0; i < n;i++){	
        for( j =i+ 1; j <n;j++){
            if(a[i]<a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;	
        	}
  		 	}
    		}
  printf("\nOUTPUT:\n");
		for( i = 0; i < n;i++)
  		 	printf("%.3d ",a[i]);
 		 	
  printf("\n");
  system ("pause");
  return(0);
}
