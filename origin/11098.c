#include <stdio.h>
#include <string.h>
//백준 11098
//첼시를 도와줘!
/*
테스트 케이스의 개수 n이 주어진다 (n≤100)
p는 고려해야될 선수의 수이다 (1≤p≤100)
각각의 줄은 선수의 가격 C 와 이름을 입력한다 (C<2*109)
모든 선수의 가격은 서로 다르다
선수의 이름은 20자 이하여야 하며, 사이에 공백이 있어서는 안 된다.
*/

int n, p, c;

struct player {


  int price;
  char name[21];


};

int main(void) {

  char names[101][21]; //최고가 선수의 이름을 저장할 배열
  scanf("%d", &n);

  //테스트케이스 수만큼 반복
  for (int i = 0; i < n; i++) {

    struct player players[101]; //해당 케이스의 선수들을 저장할 배열
    scanf("%d", &p);
    int maxPrice = 0;
    int maxIndex = 0;


    //선수의 수만큼 반복
    for (int j = 0; j < p; j++) {
      char tmp[21];
      scanf("%d %s", &players[j].price, tmp);
      strcpy(players[j].name, tmp);

      //최대값 찾아 인덱스 저장
      if (maxPrice < players[j].price) {
        maxPrice = players[j].price;
        maxIndex = j;
      }

    }
    //최종적으로 저장된 max인덱스의 name을 배열에 저장
    strcpy(names[i], players[maxIndex].name);

  }
  //결과값 출력
  for (int i = 0; i < n; i++) {
    printf("%s\n", names[i]);
  }

  return 0;

}
