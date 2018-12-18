#include <stdio.h>
#include <string.h>

#define S 2
#define N 3
#define M 4

void test(){
  int i,j,k;
  int count = 0;
  int array1D[S * N * M];
  int array3D[S][N][M];

printf("array3D\n");
  for ( i = 0; i < S; i++) {
    for ( j = 0; j < N ; j++) {
      for ( k = 0; k < M ; k++) {
        array3D[i][j][k] = count++;
        printf("%d ", array3D[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
  memcpy(array1D, array3D, sizeof(int) * N * M * S);
  printf("after memcpy\narray1D\n");
  for ( i = 0; i < S; i++) {
    for ( j = 0; j < N ; j++) {
      for ( k = 0; k < M ; k++) {
        printf("%d ", array1D[(i * N +j)* M +k]);
      }
      printf("\n");
    }
    printf("\n");
  }
}
int main(int argc, char const *argv[]) {
  test();
  return 0;
}
