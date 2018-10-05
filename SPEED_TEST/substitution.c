#include <stdio.h>
#include <string.h>
#define N 33
void simulation(){
  int i;
  int array_to[N], array_from[N];
  printf("Start\n");
  for (i = 0; i < N; i++) {
    array_to[i] = array_from[i];
  }
  printf("END\n");
}
int main(int argc, char const *argv[]) {
  simulation();
  return 0;
}
