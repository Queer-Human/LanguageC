#include <iostream>
#include <cstring>
using namespace std;
// #include <time.h>

#define SIZE 10000*10

typedef struct {
  double array[SIZE];
} ARR;

void simulation_structure(){
  int i,j,k;
  ARR from, to;

  j = 1.0;
  for (i = 0; i < SIZE; i++) {
    from.array[i] = j;
    // printf("%f ",from.array[i]);
    j += 1.0;
  }
  // printf("\n");

  to = from;
  // printf("%p %p\n%p %p \n",&to,to.array, &from, from.array);
  // for (i = 0; i < SIZE; i++) {
  //   printf("%f ",to.array[i]);
  // }
  // printf("\n");
}//simulation_structure()

void simulation_memcpy(){
  int i,j,k;
  double from[SIZE], to[SIZE];

  j = 1.0;
  for (i = 0; i < SIZE; i++) {
    from[i] = j;
    // printf("%f ",from[i]);
    j += 1.0;
  }
  // printf("\n");

  memcpy(to, from, sizeof(double) * SIZE );

  // for (i = 0; i < SIZE; i++) {
  //   printf("%f ",to[i]);
  // }
  // printf("\n");

}//simulation_memcpy()

void simulation_substitution(){
  int i,j,k;
  double from[SIZE], to[SIZE];

  j = 1.0;
  for (i = 0; i < SIZE; i++) {
    from[i] = j;
    // printf("%f ",from[i]);
    j += 1.0;
  }
  // printf("\n");


  for (i = 0; i < SIZE; i++) {
    to[i] = from[i];
  }
  // for (i = 0; i < SIZE; i++) {
  //   printf("%f ",to[i]);
  // }
  // printf("\n");

}//simulation_substitution()

void test(){
  int i, times = 100;
  struct timespec startTime, endTime, sleepTime;

  clock_gettime(CLOCK_REALTIME, &startTime);

  for(i = 0 ; i < times ; i++ ){
    simulation_memcpy();
    // simulation_structure();
    // simulation_substitution();
  }

  clock_gettime(CLOCK_REALTIME, &endTime);

  // 処理時間を出力
  printf("開始時刻　 = %10ld.%09ld\n", startTime.tv_sec, startTime.tv_nsec);
  printf("終了時刻　 = %10ld.%09ld\n", endTime.tv_sec, endTime.tv_nsec);
  printf("経過実時間 = ");
  if (endTime.tv_nsec < startTime.tv_nsec) {
    printf("%10ld.%09ld", endTime.tv_sec - startTime.tv_sec - 1
    ,endTime.tv_nsec + 1000000000 - startTime.tv_nsec);
  } else {
    printf("%10ld.%09ld", endTime.tv_sec - startTime.tv_sec
    ,endTime.tv_nsec - startTime.tv_nsec);
  }
  printf("(秒)\n");
}//test()

int main(int argc, char const *argv[]) {
  test();
  return 0;
}
