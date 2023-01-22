#include <stdio.h>
//4344 A008 평균은 넘겠지
/*
테스트 케이스의 개수 C, 학생의 수 N(1 ≤ N ≤ 1000, N은 정수), N명의 점수가 주어진다(0~100)
각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.*/

int main(void){

  int C, N, i, j, sum, std;
  scanf("%d", &C); 
  float Good[C], avg;
  int jumsu[1000];

  for(i = 0; i < C; i++){
    scanf("%d", &N);

    sum = 0;
    for(j = 0; j < N; j++){
      scanf("%d", &jumsu[j]);
      sum += jumsu[j];
    }

    avg = sum/N;
    std = 0;
    for(j = 0; j < N; j++){
      if(jumsu[j] > avg) std++;
    }

    Good[i] = (float)std/(float)N *100.000;

    //printf("%d번째 케이스의 %d명 학생 평균은 %.3f\n", i+1, N, avg);

  }

  for(i = 0; i< C; i++){
    printf("%.3f%%\n", Good[i]);
  }


  return 0;
}

