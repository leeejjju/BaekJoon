#include <stdio.h>
//���� 2920
/*������ ���� 8���� �־����� ��, �̰��� ascending(��������)����, descending(��������)����, �ƴϸ� mixed(����)���� �Ǻ�*/

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
