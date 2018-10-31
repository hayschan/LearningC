#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
  mindflow
  find out the LargestNum in the array
  the sum is all elements that != LargestNum
  print sum
  */
  int n, LargestNum = 0, sum=0, array[100], i, j, k;
  scanf("%d\n",&n);
  // try malloc tonight
  for (i = 0; i < n; i++) { //input and find the largest number
    scanf("%d",&array[i]);
    if (array[i]>LargestNum) {
      LargestNum=array[i];
    }
  }
  for (j = 0; j < n; j++) { //assign 0 to elements with largest number
    if (array[j]!=LargestNum) {
      sum += array[j];
    }
  }
/*  for (k = 0; k < n; k++) { //add all remaining elements in the array
    if (array[k]!=0) {
      sum = sum + array[k];
    }
  }
*/
  printf("\n%d\n",sum);
  return 0;
}
