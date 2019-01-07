#include <stdio.h>
#include <stdlib.h>
#include "timer.h"

void exec();
int main(int argc, char const *argv[]) {
  exec();
  return 0;
}
void exec(){

  double iStart, iElaps;
  struct timespec res, sleeptime;

  sleeptime.tv_sec = 3;
  sleeptime.tv_nsec = 5e8;

  // 指定されたクロック clk_id の分解能 (精度) をresへ格納
  // clock_getres(CLOCK_REALTIME, &res);
  // printf("実時間精度 = %ld[ns]\n", res.tv_nsec);

  iStart = seconds();
  printf("iStart: %lf\n", iStart);
  nanosleep(&sleeptime, NULL);
  iElaps = seconds() - iStart;
  printf("iElaps: %lf\n", iElaps);
}//function
