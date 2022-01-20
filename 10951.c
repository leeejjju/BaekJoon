#include <stdio.h>
//백준 10951
//(입력횟수없이)주어진 A,B들의 합을 차례로 출력하라 

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
