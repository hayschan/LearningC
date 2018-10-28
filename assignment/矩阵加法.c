#include <stdio.h>

int main(){
	int n, i, j, h, k;
	scanf("%d",&n);
	int a[100][100], b[100][100], c[100][100];
	for (i=0;i<n;i++){ //input of array a
		for (j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (i=0;i<n;i++){ //input of array b
		for (j=0;j<n;j++){
			scanf("%d", &b[i][j]);
		}
	}

	for (i=0;i<n;i++){ //calculation
		for (j=0;j<n;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (h=0;h<n;h++){ //output
		for (k=0;k<(n-1);k++){ // insert space between output number except last number in a row
			printf("%d ",c[h][k]);
		}
		printf("%d\n",c[h][k]); // next line
	}

	return 0;
}
