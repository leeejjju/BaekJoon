#include <stdio.h>
//���� 4344
/*
�׽�Ʈ ���̽��� ���� C, �л��� �� N(1 �� N �� 1000, N�� ����), N���� ������ �־�����(0~100)
�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.*/

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

    //printf("%d��° ���̽��� %d�� �л� ����� %.3f\n", i+1, N, avg);

  }

  for(i = 0; i< C; i++){
    printf("%.3f%%\n", Good[i]);
  }


  return 0;
}
