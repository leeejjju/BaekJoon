#include <stdio.h>
//���� 2908
//�־��� �� ���ڸ����� �ڸ����� ������ �� ���� ���� ū���� ���϶�

int main(void){

  int n1, n2;
  int hun, ten, one;
  
  scanf("%d %d", &n1, &n2);

  hun = n1/100;
  ten = (n1%100)/10;
  one = n1%10;
  n1 = hun + ten*10 + one*100;

  hun = n2/100;
  ten = (n2%100)/10;
  one = n2%10;
  n2 = hun + ten*10 + one*100;

  printf("%d", (n1>n2)?n1:n2);

  return 0;
}
