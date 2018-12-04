#include <stdio.h>
#include <time.h>
#include "mt19937-64.h"

#define NUM 10
void simulate();

int main(int argc, char const *argv[]) {
  simulate();
  return 0;
}

void simulate(){
  int i;
  unsigned long long seed = 1.0;

  // init_genrand64(seed);
  init_genrand64((unsigned)time(NULL));

  printf("\tgenerates a random number on [0, 2^64-1]-interval\n");
  printf("\treturn : unsigned long long\n");
  for(i = 0 ; i < NUM; i++){

    printf("%llu ",genrand64_int64());
  }
  printf("\n\n");


  printf("\tgenerates a random number on [0, 2^63-1]-interval \n");
    printf("\treturn : long long\n");
  for(i = 0 ; i < NUM; i++){
    printf("%lld ",genrand64_int63());
  }
  printf("\n\n");

  printf("\tgenerates a random number on [0,1]-real-interval \n");
    printf("\treturn : double\n");
  for(i = 0 ; i < NUM; i++){
    printf("%lf ",genrand64_real1());
  }
  printf("\n\n");

  printf("\tgenerates a random number on [0,1)-real-interval \n");
    printf("\treturn : double\n");
  for(i = 0 ; i < NUM; i++){
    printf("%lf ",genrand64_real2());
  }
  printf("\n\n");

  printf("\tgenerates a random number on (0,1)-real-interval \n");
    printf("\treturn : double\n");
  for(i = 0 ; i < NUM; i++){
    printf("%lf ",genrand64_real3());
  }
  printf("\n\n");

}//end-func
