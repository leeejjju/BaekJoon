#include <stdio.h>
//백준 2739
//N을 입력받은 뒤, 구구단 N단을 출력


int main(void) {

  int N, i;

  scanf("%d", &N);
  for(i = 1; i < 10; i++){
    printf("%d * %d = %d\n", N, i, N*i);
  }

  return 0;

}

