#include <stdio.h>
//백준 1546 
//최고점이 M일 때, 모든 점수를 (점수)/M*100으로 고친 평균을 구하라 


int main(void){
  int num; //number of subjects
  int M = 0, i, j; 
  float sum = 0;

  //printf("number of subjects : ");
  scanf("%d", &num);

  
  int jumsu[num]; //keep jumsu at here
  float gura[num]; //keep modified jumsu at here 

  //printf("enter score of subjects : ");
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
    gura[i] = (float)jumsu[i]/(float)M * 100.0000;
    sum += gura[i];
  }

  printf("%f",sum/(float)num);

  return 0;
}
