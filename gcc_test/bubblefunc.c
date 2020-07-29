#include <stdio.h>


/* printout */
void printarray(int *array, int length) {
  int i;
  for (i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

/* swap a <=> b */
void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

/* bubble sort */
void sort(int *array, int length) {
  int i, j;
  for (i = 0; i < length - 1; i++) {
    for (j = 0; j < length - i - 1; j++) {
      if (array[j] > array[j+1]) {
        swap(&array[j], &array[j+1]);
      }
    }
  }
}

