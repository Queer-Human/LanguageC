#include<stdio.h>

int bit(int m,int n){
  int res;
  int a;
  int b;
  int c;
  int count=0;

  a = m;

  while(a!=0){
    count++;
    c = a;
    a = a/2;
    b = c - 2*a;
    if(count==n){
      printf("b%d:%d ",count,b);
    }
    else{}
  }
  return res;
}
int main(void){

  int m =16;
  int n =1;

  scanf("%d",&n);
  bit(m,n);
  
  return 0;
}
