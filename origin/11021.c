#include <stdio.h>
//���� 11021
//A�� B�� �Է¹��� ����, A+B�� ���


int main(void) {

  int T, A, B;
  int i;

  scanf("%d", &T);

  int ans[T];

  for(i = 0; i < T; i++){
    scanf("%d %d", &A, &B);
    ans[i] = A + B;
  }

  for(i = 0; i < T; i++){
    printf("Case #%d: %d\n",i+1, ans[i]);
  }

  return 0;
}

