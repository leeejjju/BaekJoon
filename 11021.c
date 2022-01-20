#include <stdio.h>
//백준 11021
//A와 B를 입력받은 다음, A+B를 출력


int main(void) {

  int T, A, B;
  int i;

  scanf("%d", &T);

  int ans[T];

  for(i = 0; i < T; i++){
    scanf("%d %d", &A, &B);
    ans[i] = A + B;
  }

  for(i = 0; i < T; i++){
    printf("Case #%d: %d\n",i+1, ans[i]);
  }

  return 0;
}

