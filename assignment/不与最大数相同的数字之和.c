#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
  mindflow
  find out the largest number
  then make all elements with the number become zero
  sum of all element
  */
  int n, LargestNum = 0, sum, array[100], i, j, k;
  scanf("%d\n",&n);
  // try malloc tonight
  for (i = 0; i < n; i++) { //input and find the largest number
    scanf("%d ",&array[i]);
    if (array[i]>LargestNum) {
      LargestNum=array[i];
    }
  }
  for (j = 0; j < n; j++) { //assign 0 to elements with largest number
    if (array[j]==LargestNum) {
      array[j]=0;
    }
  }
  for (k = 0; k < n; k++) { //add all remaining elements in the array
    sum = sum + array[k];
  }
  printf("%d\n",sum);
  return 0;
}
