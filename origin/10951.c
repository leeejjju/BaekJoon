#include <stdio.h>
//���� 10951
//(�Է�Ƚ������)�־��� A,B���� ���� ���ʷ� ����϶� 

int main(void){

  int A, B, ans[100], count = 0, i;
  int r;

  while(1){
    r = scanf("%d %d", &A, &B);

    if(r != 2){
      break;
    }

    ans[count] = A+B;
    count++;

  }

  for(i = 0; i <count; i++){
    printf("%d\n", ans[i]);
  }


  return 0;
}
