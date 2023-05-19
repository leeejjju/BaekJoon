#include <stdio.h>
//백준 10818
//N개의 정수들 중 최대 최소값을 구하라 

int main(void){

  int N, num;
  int max = -1000000, min = 1000000, i;

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    scanf("%d", &num);
    if(num > max) max = num;
    if(num < min) min = num;
  }

  printf("%d %d", min, max);
  
  return 0;
}
