#include <stdio.h>
//백준 2439
//N번째 줄에 별 N개를 찍는 문제. 단, 좌측정렬 


int main(void) {

  int N;
  int i, j;

  scanf("%d", &N);


  for(i = 1; i <= N; i++){
    for(j = 1; j <= (N-i); j++){
      printf(" ");
    }
    for(j = 1; j <= i; j++){
      printf("*");
    }
    printf("\n");
  }


  return 0;
}

