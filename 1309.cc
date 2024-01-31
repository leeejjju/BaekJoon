#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1309
/*
2*N(1<=N<=100000) 우리가 있다. 
사자는 가로로도 세로로도 붙어있게 배치할 수 없다. 
사자를 배치하는 경우의 수를 9901로 나눈 나머지를 출력하라.
사자를 한 마리도 배치하지 않는 경우도 하나의 경우의 수로 친다고 가정한다.
*/

int N;
vector<vector<int>> DP; //DP[i][j] = 2*i 배열에 사자를 j마리 배치하는 경우의 수


int get_pos(int n){

    return n;

}

/*
사자를 최소 0마리, 최대 N마리 배치할 수 있는건 확실하지. 
최대로 배치하는건 간단함... 두개임...
그보다 적은게 문제인데...
이걸 이전 DP들을 활용해서 풀 수 있는가?
초기부터 해보자.

0마리를 배치하는 수는 1개
1마리를 배치하는 수는 N*2개. 아무칸에나 넣으면 되니까.
2마리를 배치하는 수는? 아까 넣은 칸의 상하좌우는 불가능하니 칸 두개가 불능이 되고... N*2-3?아근데
어디에 배치했냐에 따라 불능인 칸이 두개일수도 세개일수도... 돌겟네진짜

- -
- -
- -
- -

한개를 배치한는 수는 8개인데, 항상 네개의 경우는 2칸을 불능으로, 나머지는 세칸을 불능으로 만듬.
그럼 4개의 경우 * (2*N-3) 이게 모서리에 한놈 배치된 경우고
(2*N-4)개의 경우 * (2*N-4) 이게 모서리 아닌곳에 한놈 배치된 경우들의 경우의 ㅜ수... 
경우의 경우의 ㅅㅍ거대한 경우 세계관

그은데??? 이 불능인 칸이 또 다른 사자들과의 거시기에 따라 계속 바뀌잔ㅇ아 이건 아닌 것 같은데

어케해야할까 이거를를를를를ㄹ르르르를를ㄹ르르를
N=0이면 0칸, 0.
N=1이면 2칸, 

N을 알면? N칸에 사자 n마리 배치된 배열 하나가 있으면
N+1은... [N+1][N+1]은 2개일거고. 
[N+1][j](j<N+1)은 ... 새로 생긴 두 칸 있자나... 그거에 대한 경우의 수만 추가됐다고 보면 되지 않을가?
근데 그거가...? 
원래 있던 경우의 수가... 
* - 이거거나 - * 이거거나 - -이거거나 셋 중 하나겠지? 이걸 비율로 확실시 할 수 있을까?


N=3이면
- -
- -
- -

사자 0마리 -> 한개
사자 1마리 -> 6개 -> *-하나 -*하나 --네개
사자 2마리 -> 




*/
int main(void){
    SPEEDUP
    cin >> N;
    cout << get_pos(N)%9901; 
}