#include <stdio.h>
//���� 11720
//���� ���� ������ n���� ���ڸ� ��� ���ؼ� ���

int main(void){

  int i, sum = 0, n;

  scanf("%d", &n);
  char a[n+1];
  
  scanf("%s", a);

  for(i = 0; i <n; i++){
    sum += (a[i] - 48);
  }

  printf("%d", sum);

  return 0;
}
