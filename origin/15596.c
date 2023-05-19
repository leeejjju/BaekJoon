#include <stdio.h>
//백준 15596
/*
정수 n개가 주어졌을 때, n개의 합을 구하는 함수
근데 함수만제출하는거엿음 그것도모르고 컴파일에러 두번 떳네ㅜ 
*/

long long sum(int *a, int n){
  int i;
  long long ans = 0;
  for(i = 0; i < n; i++){
    ans += a[i];
  }

  return ans;
}
//a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
//n: 합을 구해야 하는 정수의 개수
//리턴값: a에 포함되어 있는 정수 n개의 합

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



