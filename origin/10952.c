#include <stdio.h>
//���� 10952
//0 0�� �ԷµǱ� ������ �־��� A,B���� ���� ���ʷ� ����϶� 

int main(void){

  int A, B, ans[100], count = 0, i;

  while(1){
    scanf("%d %d", &A, &B);

    if(A == 0 && B == 0){
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
