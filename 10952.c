#include <stdio.h>
//백준 10952
//0 0이 입력되기 전까지 주어진 A,B들의 합을 차례로 출력하라 

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
