#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int isRevert(char *c){ // kiem tra thuan nghich
//    char x[100];
//    strcpy(x, c);
//    strrev(c);
//    return strcmp(x, c) == 0;
//}
//
//int main() {
//    long i;
//    char x[10];
//    for(i = 111111111; i<= 999999999; i++){
//        ltoa(i, x, 10);
//        if(isRevert(x)){
//            printf("%10d", i);
//        }
//    }
//    return 0;
//}

int thuan_nghich(int n){
    int m = 0, tmp = n;
    while(n != 0){
        m = m * 10 + n % 10; // chú ý câu l?nh này
        n /= 10;
    }
    if(tmp == m){ // c?n so sánh m v?i tmp, vì n dã = 0
        return 1;
    }
    return 0;
}

int main(){
    int n;
    scanf ("%d", &n);
    if(thuan_nghich(n)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
