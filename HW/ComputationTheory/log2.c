#include<stdio.h>
#include<math.h>


int main(){

  int x;
  int res;
  int a = 0;
  int b = 1;
  printf("X:");
  scanf("%d",&x);
  
  if(x==0){
    res = 0;
  }
  else{
    while(b!=0){
      if(x == (int)exp2(a)){
	b = 0;
      }
      else{
	a++;
      }
    }
  }
  printf("a:%d \n\n",a);
  return 0;
}
