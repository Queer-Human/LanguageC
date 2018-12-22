#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void test_rand(){
  int i, r;

  // srand(time(NULL));
  srand(10);
  printf("Generate random number by rand()\n");
  for (i = 0; i < N; i++) {
    r = rand();
    printf("%d \n",r );
  }//for

}//function
void test_random(){
  int i;
  long int r;
  // srandom(time(NULL));
  srandom(10);
  printf("Generate random number by random()\n");
  for (i = 0; i < N; i++) {
    r = random();
    printf("%ld \n",r );
  }//for
}//function}

int main(int argc, char const *argv[]) {
  test_rand();
  // test_random();
  return 0;
}
