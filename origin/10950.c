#include <stdio.h>
//백준 10950
//T개의 A와 B들을 입력받은 다음, 차례로 A+B를 출력


int main(void) {

  int T;
  int A, B;
  int i;

  scanf("%d", &T);

  int ans[T]; 

  for(i = 0; i < T; i++){
    scanf("%d %d", &A, &B);
    ans[i] = A+B;
  }

  for(i = 0; i < T; i++){
    printf("%d\n", ans[i]);
  }

  return 0;

}

