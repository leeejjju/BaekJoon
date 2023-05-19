#include <stdio.h>
//백준 2920
/*연주한 순서 8개가 주어졌을 때, 이것이 ascending(오름차순)인지, descending(내림차순)인지, 아니면 mixed(섞임)인지 판별*/

int main(void){

  int note[8];
  int i;

  for(i = 0; i < 8; i++){
    scanf("%d", &note[i]);
  }

  int flag = 0;

  //ascending
  flag = 1;
  for(i = 0; i < 8; i++){
    if(i !=7){
      if(!(note[i] < note[i+1])){
        flag = 0;
        break;
      }
    } 
  }
  if(flag){
    printf("ascending");
    return 0;
  }

  //descending
  flag = 1;
  for(i = 0; i < 8; i++){
    if(i !=7){
      if(!(note[i] > note[i+1])){
        flag = 0;
        break;
      }
    } 
  }
  if(flag){
    printf("descending");
    return 0;
  }

  //mixed
  printf("mixed");

  return 0;
}
