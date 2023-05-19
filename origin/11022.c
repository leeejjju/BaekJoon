#include <stdio.h>
//백준 11022
//A와 B를 입력받은 다음, A+B를 출력(보다 아름답게)


int main(void) {

  int T;
  int i;

  scanf("%d", &T);

  int num[T][2];

  for(i = 0; i < T; i++){
    scanf("%d %d", &num[i][0], &num[i][1]);
  }

  for(i = 0; i < T; i++){
    printf("Case #%d: %d + %d = %d\n",i+1, num[i][0], num[i][1], num[i][0]+num[i][1]);
  }

  return 0;
}

