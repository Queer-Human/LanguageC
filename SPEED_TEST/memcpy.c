#include <stdio.h>
#include <string.h>
#define N 32
void simulation(){
  int array_to[N], array_from[N];
  printf("Start\n");
  memcpy(array_to,array_from,sizeof(int)* N);
  printf("END\n");
}
int main(int argc, char const *argv[]) {
  simulation();
  return 0;
}
