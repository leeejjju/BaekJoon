#include <stdio.h>
#include <string.h>
//백준 1157
/*주어진 단어에서 가장 많이 사용된 알파벳을 구하라. 단, 대소문자를 구분하지 않는다.*/

int main(void){

  char s[1000000];

  int alpha[26]; //각 알파벳들이 사용된 갯수... 
  int flag = 0; //중복최대값이 있느냐
  int i;
  int max = 0, maxIndex = 0;
  
  scanf("%s", s);
  for(i = 0; i < 26; i++) alpha[i] = 0; //초기화

  for(i = 0; i < strlen(s); i++){
    if((int)s[i] >= 97) s[i] -= 32; //대문자변환
    alpha[(int)s[i] - 65] ++;
  }


  for(i = 0; i < 26; i++){
    if(max < alpha[i]){
      max = alpha[i];
      maxIndex = i;
      flag = 0;
    }else if(max == alpha[i]){
      flag = 1;
    }
  }

  if(flag){
    printf("?");
  }else{
    printf("%c", maxIndex+65);
  }




  return 0;
}
