#include <stdio.h>
//Beakjoon 14490
/*�뿭�̴� ������ ģ����.

���� ��뿭�� ����ϸ� ���� �˾�?��
��??��
���ʴ����̾�~ ����!��

n:m�� �־�����. ������ ��������. (...)

�Է�
n�� m�� :�� ���̿� �ΰ� �־�����. (1 �� n, m �� 100,000,000)

���
�� ���� �ִ������� ����Ͽ� ����Ѵ�.*/

int main(void){
  int num1, num2;
  int big, sml;
  scanf("%d:%d", &num1, &num2);

  big = (num1>num2) ? num1 : num2;
  sml = (num1<num2) ? num1 : num2;
  //printf("%d, %d\n", big, sml);

  while(big/sml != 0){ //���� ���̻� ���������� ������ ���� 

  }

  if(num1 == num2){
    printf("1:1");
  }else{
    printf("%d:%d", num1, num2);
  }


  return 0;
}
