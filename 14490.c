#include <stdio.h>
//Beakjoon 14490
/*대열이는 욱제의 친구다.

“야 백대열을 약분하면 뭔지 알아?”
“??”
“십대일이야~ 하하!”

n:m이 주어진다. 욱제를 도와주자. (...)

입력
n과 m이 :을 사이에 두고 주어진다. (1 ≤ n, m ≤ 100,000,000)

출력
두 수를 최대한으로 약분하여 출력한다.*/

int main(void){
  int num1, num2;
  int big, sml;
  scanf("%d:%d", &num1, &num2);

  big = (num1>num2) ? num1 : num2;
  sml = (num1<num2) ? num1 : num2;
  //printf("%d, %d\n", big, sml);

  while(big/sml != 0){ //둘이 더이상 나누어지지 않을때 종료 

  }

  if(num1 == num2){
    printf("1:1");
  }else{
    printf("%d:%d", num1, num2);
  }


  return 0;
}
