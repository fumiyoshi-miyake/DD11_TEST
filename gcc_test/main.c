#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubblefunc.h"

#define ARRAY_NUM 20

/* program entry */
int main(int argc, char **argv) {
  int array[ARRAY_NUM] = {0};
  int i, j, r;
  int fFind;

  srand(time(NULL));
  /* 1 からARRAY_NUMの重複しない値をランダムにarrayに格納する。*/
  for( i = 0; i < ARRAY_NUM; i++ ) {
    do {
      fFind = 0;
      r = rand() % ARRAY_NUM + 1;
      for( j = 0; j < i; j++){
	if( array[j] == r ) {
	  fFind = 1;
	  break;
	}
      }
    }while(fFind);
    array[i] = r;
  }
  printarray(&array[0], ARRAY_NUM);
  sort(array, ARRAY_NUM);
  printarray(&array[0], ARRAY_NUM);
  return 0;
}

