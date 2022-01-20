#include <stdio.h>
//백준 2562
/*9개의 자연수 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지 구하라*/

int main(void){

  int n;
  int max = 0, maxIndex = 0;
  int i;

  for(i = 0; i < 9; i++){
    scanf("%d", &n);
    if(max < n){
      max = n;
      maxIndex = i;
    }
  }

  printf("%d\n%d", max, maxIndex+1);

  return 0;
}
