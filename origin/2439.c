#include <stdio.h>
//���� 2439
//N��° �ٿ� �� N���� ��� ����. ��, �������� 


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

