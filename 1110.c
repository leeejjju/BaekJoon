#include <stdio.h>
//백준 1110
/*
 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다. 그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다. 

N(0~99)이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램*/

int main(void){

  int N, New = -1, temp;
  int count = 0;

  scanf("%d", &N);

  while(1){
    if(New == N) break;
    if(count == 0)New = N;
    
    temp = New/10 + New%10;
    New = (New%10)*10 + temp%10;

    //printf("%d\n", New);
    count++;

  }
  printf("%d", count);

  return 0;
}
