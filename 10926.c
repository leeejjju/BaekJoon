#include <stdio.h>
//백준 10926
/*이미 존재하는 아이디가 주어졌을 때, 놀람(??!)을 표현*/

int main(void){

  char ID[50];
  char whatThe[10] = "\?\?!";

  
  scanf("%s", ID);
  printf("%s%s", ID, whatThe);


  return 0;
}
