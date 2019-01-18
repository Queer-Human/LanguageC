#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BR() printf("\n")
#define X 3
#define Y 5
int compare_int(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int compare_double(const void *a, const void *b){
    return *(double*)b - *(double*)a;
}

void exec(){
  int i,j;
  // int array2D[X][Y];
  double array2D[X][Y];

  for(i = 0 ; i < X ; i++ ){
    for(j = 0 ; j < Y ; j++ ){
      array2D[i][j] = (double)j + 1.234;
      // array2D[i][j] = rand() % 10;
      // printf("%d ",array2D[i][j]);
      printf("%lf ",array2D[i][j]);
    }//for
    BR();
  }//for
  BR();

  for(i = 0 ; i < X ;i++ ){
    // qsort(&array2D[i][0], Y, sizeof(int), compare_int);
    qsort(&array2D[i][0], Y, sizeof(double), compare_double);
  }//for

  BR();
  for(i = 0 ; i < X ; i++ ){
    for(j = 0 ; j < Y ; j++ ){
      // printf("%d ",array2D[i][j]);
      printf("%lf ",array2D[i][j]);
    }//for
    BR();
  }//for
  BR();
}//func

int main(int argc, char const *argv[]) {
  exec();
  return 0;
}
