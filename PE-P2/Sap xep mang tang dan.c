#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	 int i,j,n;
	printf("Nhap n = ");scanf("%d", &n);
	int a[n];
	for ( i =0 ; i<n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
    
    int tg;
  	for( i = 0; i < n;i++){	
        for( j =i+ 1; j <n;j++){
           if(a[i]>a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;	
        	}
  		 	}
    		}
  printf("\nOUTPUT:\n");
		for( i = 0; i < n;i++){
 		 	if(a[i]%2==0){
  		 	printf("%d ",a[i]);
		 	}
 		 	}
  printf("\n");
  system ("pause");
  return(0);
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
		for( i = 0; i < n;i++){
 		 	if(a[i]%2==1){
  		 	printf("%d ",a[i]);
 		 	}
 		 	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
