#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf ("%d", &n);
    int cnt=1;
    for (int i=1; i<=sqrt(n); i++){
        cnt = cnt*2;
        if (cnt==n){
            printf ("%d", i);
            break;
        }
    }
    if (cnt!=n) printf ("%d is not a power of 2", n);
    return 0;
}
