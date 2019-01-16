#include <stdio.h>
#include "timer.h"
#define N 100000
#define BR() printf("\n")

typedef struct _ARR{
  int X[N];
  int Y[N];
}ARR;

ARR add(ARR fA, ARR fB){
  int i;
  ARR fC;
  for (i = 0; i < N; i++) {
    fC.X[i] = fA.X[i] + fB.Y[i];
    fC.Y[i] = fA.Y[i] + fA.Y[i];
  }
  return fC;
}

void add_pointer(ARR* fA, ARR* fB, ARR* fC){
  int i;
  for (i = 0; i < N; i++) {
    fC->X[i] = fA->X[i] + fB->Y[i];
    fC->Y[i] = fA->Y[i] + fA->Y[i];
  }
}

void exec(){
  int i;
  ARR A, B, C;
  double iStart, iElaps;
  for (i = 0; i < N; i++) {
    A.X[i] = i + 1;
    A.Y[i] = i + 1;
    B.X[i] = i + 1;
    B.Y[i] = i + 1;
  }
  iStart = seconds();
  C = add(A, B);
  iElaps = seconds() - iStart;
  printf("HOST iElaps add() %lf\n",iElaps );
  BR();
  for (i = 0; i < 5; i++) {
    printf("X[%d] A %d B %d = C %d\n",i, A.X[i], B.X[i], C.X[i] );
    printf("Y[%d] A %d B %d = C %d\n",i, A.Y[i], B.Y[i], C.Y[i] );
  }
  BR();

  for (i = 0; i < N; i++) {
    A.X[i] = i + 1;
    A.Y[i] = i + 1;
    B.X[i] = i + 1;
    B.Y[i] = i + 1;
  }
  iStart = seconds();
  add_pointer(&A, &B, &C);
  iElaps = seconds() - iStart;
  printf("HOST iElaps add_pointer() %lf\n",iElaps );
  BR();
  for (i = 0; i < 5; i++) {
    printf("X[%d] A %d B %d = C %d\n",i, A.X[i], B.X[i], C.X[i] );
    printf("Y[%d] A %d B %d = C %d\n",i, A.Y[i], B.Y[i], C.Y[i] );
  }
  BR();

}
int main(int argc, char const *argv[]) {
  exec();
  return 0;
}
