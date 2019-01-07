#include <sys/time.h>
#include <time.h>

#ifndef _TIMER_H
#define _TIMER_H

inline double seconds_gtod()
{
    struct timeval tp;
    // POSIX規格では NULL 以外の値を指定した場合の挙動は「未定義」
    // https://www.mm2d.net/main/prog/c/time-04.html
    // struct timezone tzp;
    // int i = gettimeofday(&tp, &tzp);
    int i = gettimeofday(&tp, NULL);
    return ((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6);
}

inline double seconds(){

  struct timespec tsp;
  int status = clock_gettime(CLOCK_REALTIME, &tsp);

  // printf("現在時間 = %10ld.%09ld\n", tsp.tv_sec, tsp.tv_nsec);
  return ((double)tsp.tv_sec + (double)tsp.tv_nsec * 1.e-9);
}

#endif // _TIMER_H
