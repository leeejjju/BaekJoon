#include <stdio.h>
//���� 15596
/*
���� n���� �־����� ��, n���� ���� ���ϴ� �Լ�
�ٵ� �Լ��������ϴ°ſ��� �װ͵��𸣰� �����Ͽ��� �ι� ���פ� 
*/

long long sum(int *a, int n){
  int i;
  long long ans = 0;
  for(i = 0; i < n; i++){
    ans += a[i];
  }

  return ans;
}
//a: ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭 (0 �� a[i] �� 1,000,000, 1 �� n �� 3,000,000)
//n: ���� ���ؾ� �ϴ� ������ ����
//���ϰ�: a�� ���ԵǾ� �ִ� ���� n���� ��

int main(void){
  int n, i;

  scanf("%d", &n);
  int a[n];

  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  printf("%lld", sum(a, n));
  return 0;
}



