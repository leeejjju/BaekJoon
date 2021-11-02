#include <stdio.h>
//백준 1546 
/*세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.*/

int main(void){
  int num; //number of subjects
  int jumsu[50] = {0}; //keep jumsu at here
  float gura[50] = {0}; //keep modified jumsu at here 
  int M = 0, i, j; 
  float sum = 0;

  //printf("number of subjects : ");
  scanf("%d", &num);

  //printf("enter jumsu of subjects : ");
  for(i = 0; i < num; i++){ //get jumsus
    scanf("%d", &jumsu[i]);
  }

  for(i = 0; i < num; i++){ //find Max value
    if(M < jumsu[i]){
      M = jumsu[i];
    }
  }

  //printf("max value is %d\n", M);

  for(i = 0; i < num; i++){ //modify jumsu and keep it 
    gura[i] = (float)jumsu[i]/(float)M * 100.00;
    sum += gura[i];
  }

  //for(i = 0; i < num; i++){
  //  printf("%.2f ", gura[i]);
  //}

  //printf("\nsum is %.2f\n", sum);

  //printf("modified average is ");
  printf("%f",sum/(float)num);

  return 0;
}
