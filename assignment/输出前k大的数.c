#include <stdio.h>
#include <stdlib.h>

int cmp_1(const void *a, const void *b){ //quicksort comparator variant 1
   return ( *(int*)b - *(int*)a);
}

int cmp_2(const void *a, const void *b){ //quicksort comparator variant 2
  if (*(int*)a > *(int*)b)
    return -1;
  if (*(int*)a == *(int*)b)
    return 0;
  if (*(int*)a < *(int*)b)
    return 1;
}

int main(){
  // quicksort the array and then ouput first k numbers
  // print first topNUM elements
  int n, *array, topNUM, i, j;
  scanf("%d\n",&n);
  array = (int*) malloc(n*sizeof(int));
  for (i = 0; i < n; i++) {
    scanf("%d\n",&array[i]);
  }
  scanf("%d\n",&topNUM);
  // void qsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));
  qsort(array, n, sizeof(int), cmp_1);
  for (j = 0; j < topNUM; j++) {
    printf("%d\n",array[j] );
  }
}
