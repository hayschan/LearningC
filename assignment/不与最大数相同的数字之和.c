#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
  Mindflow
  1. find out the LargestNum in the array
  2. add the sum of all elements that != LargestNum
  3. print sum
  */
  int n, LargestNum = 0, sum=0, i, j;
  int *array;
  scanf("%d\n",&n);
  array = (int*) malloc(n*sizeof(int));
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
  printf("\n%d\n",sum);
  free(array);
  return 0;
}
