#include <stdio.h>
//���� 8393
//n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷�(1 �� n �� 10,000)


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

