#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int count[255] = {0};
	int n;
    scanf("%d", &n);
    getchar();

    char s[n];
    int i, j;
    for (i = 0; i < n; i++) {
        scanf(" %c", &s[i]); 
        ++count[s[i]];
    }
    int max=0, max2=0;
    for (i=0; i<n; i++){
    	if(count[s[i]]>max){
    		max = count[s[i]];
		}
	}
    for (i=0; i<n; i++){
    	if (count[s[i]]==max){
    		continue;
		} else if (max2<count[s[i]]){
			max2 = count[s[i]];
		}
	}
	int dem=0;
	for (i=0; i<n; i++){
		if(count[s[i]]==max){
			printf ("%c\n", s[i]);
			dem++;
			count[s[i]] = 0;
		}
	}
	if (dem<2){
		for(i=0; i<n; i++){
			if (count[s[i]]==max2){
				printf ("%c\n", s[i]);
				break;
			}
		}
	}
    return 0;
}

