// Online C compiler to run C program online
#include <stdio.h>

#include<stdio.h>
#include<math.h>

int main (){
    int n;
    scanf ("%d", &n);
    int a[n];
    int i, j;
    for (i=0; i<n; i++){
        scanf ("%d", &a[i]);
    }
    int swap;
    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if(a[i]<a[j]){
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }
    
    for (i=n-1; i>=0; i--){
        if (a[i]%2==0) printf ("%d ", a[i]);
    }
    printf ("\n");
    for (i=0; i<n; i++){
        if (a[i]%2!=0) printf ("%d ", a[i]);
    }
    
}


