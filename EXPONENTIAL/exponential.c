#include <stdio.h>

// ref:
// http://www.yamamo10.jp/yamamoto/lecture/2006/1E/10th/html/node2.html#SECTION00021200000000000000
void exec();
int main(int argc, char const *argv[]) {
  exec();
  return 0;
}
void exec(){
  double num = 222.333;
  printf("num : %lf\n", num );
  printf("num 1.e-1 : %lf\n", num * 1.e-1 );
  printf("1.e-1 : %lf\n", 1.e-1 );
  printf("3.e-1 : %lf\n", 3.e-1 );
  printf("3.2e-1 : %lf\n", 3.2e-1 );
  printf("32.e-2 : %lf\n", 32.e-2 );
}//function
