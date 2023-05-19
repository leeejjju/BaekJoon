#include <stdio.h>
//백준  14681


int main(void) {

  int x, y; //두 정수, 좌표  
  scanf("%d", &x);
  scanf("%d", &y);

  int r; //사분면 번호 저장  

  if(x > 0){
    if(y > 0){
      r = 1;
    }else{
      r = 4;
    }
  }else{
    if(y > 0){
      r = 2;
    }else{
      r = 3;
    }
  }

  printf("%d", r);

  return 0;

}
