#include <stdio.h>
//���� 2475
/*�������� ������ȣ�� ó�� 5�ڸ��� ���� 5���� ���ڸ� ���� ������ ���� ���� 10���� ���� �������̴�.
������ȣ�� ó�� 5�ڸ� ���ڸ� �Է¹ް� �������� ����϶� */

int main(void){

  int n, sum = 0;
  int goyu;
  int i;

  for(i = 0; i < 5; i++){
    scanf("%d", &n);
    n *= n;
    sum += n;
  }

  goyu = sum%10;
  printf("%d", goyu);


  return 0;
}
