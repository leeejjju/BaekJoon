#include <stdio.h>
#include <string.h>
//8958 A052 OX퀴즈
/*"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.*/

int main(void){

  int N;
  int i, j;
  char s[81];

  scanf("%d", &N);
  int score[N];
  int count;

  for(i = 0; i < N; i++){
    count = 0;
    score[i] = 0;
    scanf("%s", s);
    for(j = 0; j < strlen(s); j++){
      if(s[j] == 'O'){
        count++;
        score[i] += count;
      }else{
        count = 0;
      }
    }
  }

  for(i = 0; i < N; i++){
    printf("%d\n", score[i]);
  }


  return 0;
}
