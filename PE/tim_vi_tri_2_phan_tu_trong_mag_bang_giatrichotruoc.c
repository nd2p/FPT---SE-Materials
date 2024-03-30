

int main(){
	int n;
    scanf ("%d", &n);
    int a[n];
    int i, j;
    for (i=0; i<n; i++){
    	scanf ("%d", &a[i]);
	}
	int sum;
	int cnt=0;
	scanf ("%d", &sum);
	for (i=0; i<n; i++){
    	if (cnt!=0){
    		break;
		}
		for (j=i+1; j<n; j++){
    		if (a[i]+a[j]==sum){
    			printf ("%d\n%d", i, j);
    			cnt++;
    			break;
			}
		}
	}
}

