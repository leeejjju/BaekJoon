#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1107 C026 리모컨 
/*
리모컨에는 버튼이 0부터 9까지 숫자, +와 -가 있다.
채널 0에서 -를 누른 경우에는 채널이 변하지 않고, 채널은 무한대 만큼 있다.
이동하려고 하는 채널은 N이다. 어떤 버튼이 고장났는지 주어졌을 때, 
채널 N으로 이동하기 위해서 버튼을 최소 몇 번 눌러야하는지 구하는 프로그램을 작성하시오. 
지금 보고 있는 채널은 100번이다.
*/

string n, ban = "";
int m;

bool can(string s){ //해당 숫자를 vec의 숫자들 없이 만들 수 있는지 여부 리턴. 
    for(int i = 0; i < s.length(); i++){
        size_t p = ban.find(s[i]);
        if(p != string::npos) return false;
    }
    return true;
}

int main(void){
    SPEEDUP
    //입력받기
    cin >> n >> m;
    int N = stoi(n);
    for(int i = 0; i < m; i++){
        char a;
        cin >> a;
        ban += a;
    }

    //일말의희망... 
    if(m == 0 || can(n)){//필요한 모든 자릿수가 고장 안났으면 자릿수 출력하고 끝.
        int click = (n.length() < abs(100-N))? n.length() : abs(100-N);
        cout << click;
        return 0;
    }else if(N == 100){
        cout << 0;
        return 0;
    }else if(m == 10){
        cout << abs(100-N);
        return 0;
    }

    //고장난 자릿수가 있으면... 아이고.. 있는것들로 가장 가까운 조함을 만들어야 하는데. 
    //타깃부터 하나씩 늘려도 보고 줄여도 보면서 쓸 수 있는것들로 만들 수 있는 가장 가까운 수를 찾아보자.
    bool getUpper = false, getLower = false;
    int upper = N, lower = N;
    string up, low;


    while (1){
        if(getUpper || getLower) break;

        if(upper == 100) getUpper = true;
        if(!getUpper){
            up = to_string(++upper);
            //cout << "checking with " << up << endl;
            if(can(up)) getUpper = true; //찾앗서
        }

        if(lower < 0){
            low = '0';
            lower = 0;
            //getLower = true;
        } 
        if(!getLower){
            low = to_string(--lower);
            //cout << "checking with " << low << endl;
            if(can(low)) getLower = true; //찾았어
        }
        
    }

    int UP = (up.length() + abs(upper-N));
    int DOWN = (low.length() + abs(lower-N));
    int CLICK;
    if(getUpper && getLower){
        CLICK = min(UP, DOWN);
    }else if(getUpper){
        CLICK = UP;
    }else{
        CLICK = DOWN;
    }


    int DEFAULT = abs(100-N);
    int MIN = (getLower || getUpper) ? min(CLICK, DEFAULT): DEFAULT;
    //printf("CLICK is %d and DEFAULT is %d. %d is choosen.\n", CLICK, DEFAULT, MIN);

    printf("%d", MIN);


}
