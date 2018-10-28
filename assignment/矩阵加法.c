int main(){
	int n, i, j, h, k;
	scanf("%d",&n);
	int a[n][n], b[n][n], c[n][n];
	for (i=0;i<n;i++){ //input // not completed
		for (j=0;j<(n-1);j++){
			scanf("%d ",a[i][j]);
		}
		scanf("%d\n",a[i][j]);
	}
	
	for (i=0;i<n;i++){
		for (j=0;j<(n-1);j++){
			scanf("%d ",b[i][j]);
		}
		scanf("%d\n",b[i][j]);
	}
	
	for (i=0;i<n;i++){ //calculation
		for (j=0;j<n;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for (h=0;h<n-1;h++){ //output
		for (k=0;k<(n-1);k++){
			printf("%d ",c[h][k]);
		}
		printf("%d\n",c[h][k]);
	}
	
	return 0;
}