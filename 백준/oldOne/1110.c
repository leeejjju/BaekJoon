#include <stdio.h>
//���� 1110
/*
 �־��� ���� 10���� �۴ٸ� �տ� 0�� �ٿ� �� �ڸ� ���� �����, �� �ڸ��� ���ڸ� ���Ѵ�. �� ����, �־��� ���� ���� ������ �ڸ� ���� �տ��� ���� ���� ���� ������ �ڸ� ���� �̾� ���̸� ���ο� ���� ���� �� �ִ�. 

N(0~99)�� �־����� ��, N�� ����Ŭ�� ���̸� ���ϴ� ���α׷�*/

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
