//ref: http://www1.cts.ne.jp/~clab/hsample/Math/Math5.html


#include <stdio.h>
#include <math.h>    /* exp(  )pow(  )で必要 */

double CalPois(double a, double n);
double Fact(double n);
void test(void);

/* a分間にn回起きる確率（ポアッソン分布）を計算する */
double CalPois(double lambda, double k)
{
  return (exp(-lambda) * pow(lambda, k) / Fact(k));
}

/* 階乗を計算する */
double Fact(double n)
{
  return((n == 0.0 ) ? 1: n * Fact(n - 1.0));
}

void test(void){
  double pois;
  double n;
  double a = 1.0;

  printf("1 分間に平均で１回起きる現象が\n");
  printf("n回\t起きる確率\n\n");

  for (n = 0.0; n <= 10.0; n++) {
    pois = CalPois(a, n);
    printf("%2.0lf\t%10.8lf\n", n, pois);
  }
}

/*
ref: https://bellcurve.jp/statistics/course/6984.html
製品Aを作る工場では平均して200個に1個の割合で不良品が発生します。製造された製品Aを10個抜き取る時、この中に不良品が含まれる個数がポアソン分布に従うとすると、不良品が1個含まれる（X = 1となる）確率はいくらでしょうか。
*/
void test2(){
  double pois;
  double k;
  double p = 1.0/200.0, n = 10;
  double lambda = 0.0;

  printf("200個に1個の割合で不良品が発生する現象が\n");
  printf("製品Aを10個抜き取る時n個不良品が含まれる（X = 0,1,2..,nとなる）確率\n\n");
  //不良品が発生する確率は p = 1/200 、抜き取り検査をした個数はn = 10 であることから、
  lambda = n * p;
  printf("lambda = n * p = %f * %f = %f\n\n", n, p, lambda);
  for (k = 0.0; k <= 10.0; k++) {
    pois = CalPois(lambda, k);
    printf("%2.0lf\t%10.8lf\n", k, pois);
  }

  // lambdaの値を変える
  lambda = 1.0;
  printf("\n\nlambda  = %f\n\n", lambda);
  for (k = 0.0; k <= 10.0; k++) {
    pois = CalPois(lambda, k);
    printf("%2.0lf\t%10.8lf\n", k, pois);
  }
  lambda = 2.0;
  printf("\n\nlambda  = %f\n\n", lambda);
  for (k = 0.0; k <= 10.0; k++) {
    pois = CalPois(lambda, k);
    printf("%2.0lf\t%10.8lf\n", k, pois);
  }
  lambda = 3.0;
  printf("\n\nlambda  = %f\n\n", lambda);
  for (k = 0.0; k <= 10.0; k++) {
    pois = CalPois(lambda, k);
    printf("%2.0lf\t%10.8lf\n", k, pois);
  }
  lambda = 5.0;
  printf("\n\nlambda  = %f\n\n", lambda);
  for (k = 0.0; k <= 10.0; k++) {
    pois = CalPois(lambda, k);
    printf("%2.0lf\t%10.8lf\n", k, pois);
  }
  lambda = 10.0;
  printf("\n\nlambda  = %f\n\n", lambda);
  for (k = 0.0; k <= 10.0; k++) {
    pois = CalPois(lambda, k);
    printf("%2.0lf\t%10.8lf\n", k, pois);
  }
}

int main(int argc, char const *argv[]) {
  // test();
  test2();
  return 0;
}
