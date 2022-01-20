#include <stdio.h>
//백준 2742
//N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력(1 ≤ n ≤ 10,000)


int main(void) {

  int N;
  int i;

  scanf("%d", &N);

  for(i = N; i > 0; i--){
    printf("%d\n", i);
  }

  return 0;
}

