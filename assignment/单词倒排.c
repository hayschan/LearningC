#include <stdio.h>
#include <string.h>

int main(){
  char chr_array[15][100], *temp;
  int n=0, i, j, k, z;
  for(i=0;i<100;i++){
    scanf("%s\n", &chr_array[i]);
    n++;
  }
  k = n - 1;
  for (j = 0; j < n; j++) {
    if (k>(n/2)) {
      strcpy(temp,chr_array[j]);
      strcpy(chr_array[k],temp);
      strcpy(chr_array[j],chr_array[k]);
      k--;
    }
  }
  for (z = 0; z < n - 2; z++) {
    printf("%s ", ch_arr + z);
  }
  printf("%s\n", ch_arr + i + 1);
  return 0;
}
