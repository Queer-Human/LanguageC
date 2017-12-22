#include<stdio.h>

int perfect(int x){
  int a;
  int b;
  int res;

  a = x;
  b = 0;
  
  while(a!=0){
    printf("a:%d\n",a);
    printf("b:%d\n",b);

    //if(x%a==0){
    if((x-a*(x/a))==0){
    b = b + a;
      a--;
    }
    else{
      a--;
    }
  }
  if(b==(2*x)){
    res = 1;
  }
  else{
    res = 0;
  }
  return res;
}

int main(void){

  int x;
  printf("X:");
  scanf("%d",&x);
  
  if(perfect(x)==0){
    printf("NOT PERFECT\n");
  }
  else{
    printf("PERFECT\n");
  
  }
  return 0;
}
