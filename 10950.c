#include <stdio.h>
//���� 10950
//T���� A�� B���� �Է¹��� ����, ���ʷ� A+B�� ���


int main(void) {

  int T;
  int A, B;
  int i;

  scanf("%d", &T);

  int ans[T]; 

  for(i = 0; i < T; i++){
    scanf("%d %d", &A, &B);
    ans[i] = A+B;
  }

  for(i = 0; i < T; i++){
    printf("%d\n", ans[i]);
  }

  return 0;

}

