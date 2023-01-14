#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//3663 C072 고득점
/*
최고 점수를 얻은 경우에는 조이스틱을 이용해서 이름을 입력해야 한다.
앞으로 움직이면 선택된 글자가 알파벳 다음 글자로, 뒤로 움직이면 이전 글자로 바뀐다. 
'Z'의 다음 글자는 'A'이고, 'A'의 이전 글자는 'Z'이다.
왼쪽으로 움직이면선택한 글자의 왼쪽 글자를 선택하게 되고, 오른쪽으로 움직이면 오른쪽 글자를 선택하게 된다.
가장 왼쪽의 왼쪽은 맨 오른쪽이고 반대도 그러하다.

조이스틱을 최소로 움직여서 이름을 입력하려고 한다.
입력하려고 하는 이름이 주어졌을 때, 입력하기 위해서 조이스틱을 최소 몇 번 움직여야 하는지 구하라.
*/
int t;
string s, o;

//A를 입력받은 c로 만들기 위해 움직여야 하는 최소 횟수, index위치를 실제로 변경.
int letter(char c, int index){
    int up = 'Z' - c + 1;
    int down = c - 'A';
    printf("[letter] A to %c, moved %d time.\n", c, min(up,down));
    o[index] = c;
    //cout << "[letter] now status is " << o << "\n\n";
    return min(up, down);
}

int main(void){
    SPEEDUP
    cin >> t;
    for(int i = 0; i < t; i++){

        cin >> s;

        int len = s.length();
        o = "";
        for(int i = 0; i < len; i++) o += 'A'; //초기글자세팅

        int cursor = 0, sum = 0; //커서
        if(s[0] != 'A') sum += letter(s[cursor], cursor);

        //입력 완료까지 반복
        while (1){
            if(!s.compare(o)) break; //일치검사

            //양쪽 중 다음타깃까지의 최소거리 탐색
            
            /*지금 요 알고리즘이 문제인게... 당장은 최소거리더라도 연계된 타깃들의 밀집도를 고려했을 때
            이게 절대적인 기준이 아닐 수도 있다는ㄱㅓ임 돌겟음 그리디라매! 그리디라매! 
    
            현 반례
            ABABAAAAAAABA
            10
            BBBAAAAAAAAAAAAAAAAAAB
            8
            BBAABBBBBB 
            16
            */
            int left = cursor, right = cursor, move = 0;
            for(int i = 0; i < len/2+1; i++){
                left = (left-1 < 0)? len-1 : left-1;
                right = (right+1)%len;
                move++;
                printf("[while:for] cursor is %d. left is %c and right is %c.\n", cursor, s[left], s[right]);
                if(s[left] != o[left] || s[right] != o[right]) break;
            }
            
            //위에서 찾아낸 다음 목표까지의 이동거리와 해당 글자를 바꾸는 조작 수 누적.
            cursor = (s[right] != 'A')? right: left;
            sum += (letter(s[cursor], cursor) + move);
            printf("[while:end]to the cursor %d, moved %d. now sum is %d.\n", cursor, move, sum);

        }

        cout << sum << "\n";
        
    }



}
