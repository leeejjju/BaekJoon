#include <stdio.h>
//���� 2562
/*9���� �ڿ��� �� �ִ��� ã�� �� �ִ��� �� ��° ������ ���϶�*/

int main(void){

  int n;
  int max = 0, maxIndex = 0;
  int i;

  for(i = 0; i < 9; i++){
    scanf("%d", &n);
    if(max < n){
      max = n;
      maxIndex = i;
    }
  }

  printf("%d\n%d", max, maxIndex+1);

  return 0;
}
