#include <stdio.h>
//����  14681


int main(void) {

  int x, y; //�� ����, ��ǥ  
  scanf("%d", &x);
  scanf("%d", &y);

  int r; //��и� ��ȣ ����  

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
