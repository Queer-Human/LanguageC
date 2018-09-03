#include <stdio.h>
#include <math.h>
#include "MersenneTwister/mt19937-64.h"
/*
15-1. 指数分布 | 統計学の時間 | 統計WEB
https://bellcurve.jp/statistics/course/8009.html
*/

double Probability_density(double lambda, double x){
  return lambda * exp(x  * (-lambda));
}
double Probability(double lambda, double t){
  return 1.0 - exp(t * (-lambda));
}
void test(){
  double lambda, x, t;
  int i, count = 61;
  /*
  １時間に平均10人が来客するお店に、ある客が来てから次の客が来るまでの時間が5分(1/12時間)となる確率密度
  ans => f(1/12) = 4.35
  */
  lambda = 10.0;
  x = 1.0 / 12.0;
  printf("\nf(1/12) = %f\n",Probability_density(lambda,x) );
  /*
  次の客が来るまでの時間が0分から60分となる場合の確率密度
  */
  printf("\n%5s %5s %10s\n","分", "時間", "確率密度" );
  for (i = 0; i < count; i+= 5) {
    x = (double)i / 60.0;
    printf("%5d %1.4f %1.9f\n",i, x, Probability_density(lambda, x));
  }
  /*
  1時間に平均10人が来るお店に、ある客が来てから次の客が来るまでの時間が5分以内である確率
  F(1/12) = 0.565
  */
  lambda = 10.0;
  t = 5.0 / 60.0; // 5分 = 1/12時間
  printf("\n\nF(%f) = %f\n", t, Probability(lambda, t) );
}

/*
3.2. 指数分布 (Exponential Distribution)
http://www.sat.t.u-tokyo.ac.jp/~omi/random_variables_generation.html#Exponential
*/
double Uniform( void ){
  /*一様分布*/
  static int check=0;
  if( check==0 ){ init_genrand64(10000); check=1; }

  return genrand64_real3();
}

double rand_exp( double lambda ){
  /*
  指数分布
  p(x;λ)=λexp(−λx)   ( E(x)=1/λ, V(x)=1/λ2 )
  一様乱数xに対して、−log(x)/λが指数分布に従うことを利用
  */
  return -log(Uniform())/lambda;
}

void test2(){
  int i, count = 10;
  double lambda = 1.0;
  unsigned long long seed = 10000;
  init_genrand64(seed);
  printf("%10s %10s %10s\n","Unitform():", "lambda:", "rand_exp():");
  for (i = 0; i < count; i++) {
    printf("%10f %10f %10f\n", Uniform(), lambda, rand_exp(lambda));
  }
}

int main(int argc, char const *argv[]) {
  test();
  // test2();
  return 0;
}
