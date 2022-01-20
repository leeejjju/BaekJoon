#include <stdio.h>
//백준 2741
//N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력(1 ≤ n ≤ 10,000)


int main(void) {

  int N;
  int i;

  scanf("%d", &N);

  for(i = 1; i < N+1; i++){
    printf("%d\n", i);
  }

  return 0;
}

