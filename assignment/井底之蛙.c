#include <stdio.h>

int main(){
	int RemainHeight, H, U, D, i;
	scanf("%d %d %d", &H, &U, &D);
	RemainHeight = H;
	for (i=0;RemainHeight>0;i++){
		RemainHeight = RemainHeight - U;
		if(RemainHeight > 0)
			RemainHeight = RemainHeight + D;
	}
	printf("%d",i);
	return 0;
}
