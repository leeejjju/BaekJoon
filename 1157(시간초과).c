#include <stdio.h>
#include <string.h>
//���� 1157
/*�־��� �ܾ�� ���� ���� ���� ���ĺ��� ���϶�. ��, ��ҹ��ڸ� �������� �ʴ´�.*/

int main(void){

  char s[1000000];

  int alpha[26]; //�� ���ĺ����� ���� ����... 
  int flag = 0; //�ߺ��ִ밪�� �ִ���
  int i;
  int max = 0, maxIndex = 0;
  
  scanf("%s", s);
  for(i = 0; i < 26; i++) alpha[i] = 0; //�ʱ�ȭ

  for(i = 0; i < strlen(s); i++){
    if((int)s[i] >= 97) s[i] -= 32; //�빮�ں�ȯ
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
