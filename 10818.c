#include <stdio.h>
//���� 10818
//N���� ������ �� �ִ� �ּҰ��� ���϶� 

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
