
#include <stdio.h>

int main() {
    int a[6];
    int i;
    for (i=0; i<6; i++){
        scanf ("%d", &a[i]);
    }
    int max=-1e9;
    int min=1e9;
    for (i=0; i<6; i++){
        if (a[i]>max && a[i]%2==0) max=a[i];
        if (a[i]<min && a[i]%2==0) min=a[i];
    }
    int cnt=0;
    int cnt2=0;
    for (i=0; i<6; i++){
        if (a[i]==max && cnt==0){
            a[i]=min;
            cnt++;
        }
        if (a[i]==min && cnt2==0){
            a[i]=max;
            cnt2++;
        }
    }
    for (i=0; i<6; i++){
        printf ("%d ", a[i]);
    }
    return 0;
}
