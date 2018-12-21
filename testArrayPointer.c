#include <stdio.h>

void exec(){
  int array[10];
  int *pt;
  for (size_t i = 0; i < 10; i++) {
    array[i] = i + 1;
  }
  for (size_t i = 0; i < 10; i++) {
    pt = array + i;
    printf("%p %d %p %d\n",array, array[i], pt, *pt );
  }
}

int main(int argc, char *argv[]){
  exec();
  return 0;
}
