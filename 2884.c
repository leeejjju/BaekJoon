#include <stdio.h>
//백준 2884
//알람을 45분 앞서는 시간으로 바꾸는 것.  (0 ≤ H ≤ 23, 0 ≤ M ≤ 59)


int main(void) {

  int H, M; //입력받을 시, 분
  int h,m; //출력될 45분 땡긴 시, 분
  int t; //분단위로 전체 환산한 시간 

  scanf("%d", &H);
  scanf("%d", &M);

  t = H*60 + M;

  //시간범위 넘을라카면 전날로 돌리기 
  if(t < 45){
    t = 24*60 -(45-M);
  }else{ //ㄱㅊ으면 걍 45분빼주고 
    t -= 45;
  }

  h = t/60;
  m = t%60;

  printf("%d %d", h, m);

  return 0;

}

