#include <stdio.h>
//���� 11022
//A�� B�� �Է¹��� ����, A+B�� ���(���� �Ƹ����)


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

