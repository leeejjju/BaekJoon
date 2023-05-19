#include <stdio.h>
//백준 2475
/*검증수는 고유번호의 처음 5자리에 들어가는 5개의 숫자를 각각 제곱한 수의 합을 10으로 나눈 나머지이다.
고유번호의 처음 5자리 숫자를 입력받고 검증수를 출력하라 */

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
