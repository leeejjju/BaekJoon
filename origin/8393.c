#include <stdio.h>
//백준 8393
//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램(1 ≤ n ≤ 10,000)


int main(void) {

  int n;
  int sum = 0;
  int i;

  scanf("%d", &n);
  
  for(i = 1; i < n+1; i++){
    sum += i;
  }

  printf("%d", sum);


  return 0;

}

