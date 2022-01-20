#include <stdio.h>
//백준 11720
//공백 없이 쓰여진 n개의 숫자를 모두 합해서 출력

int main(void){

  int i, sum = 0, n;

  scanf("%d", &n);
  char a[n+1];
  
  scanf("%s", a);

  for(i = 0; i <n; i++){
    sum += (a[i] - 48);
  }

  printf("%d", sum);

  return 0;
}
