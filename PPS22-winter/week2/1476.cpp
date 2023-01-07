#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1476 C027 날짜 계산 
/*
(1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
1년은 준규가 살고있는 나라에서는 1 1 1로 나타낼 수 있다. 
1년이 지날 때마다, 세 수는 1씩 증가한다. 범위를 넘어가는 경우에는 1이 된다.
E, S, M이 주어졌고, 1년이 준규가 사는 나라에서 1 1 1일때, 
준규가 사는 나라에서 E S M이 우리가 알고 있는 연도로 몇 년인지 구하는 프로그램을 작성하시오.

E S M으로 표시되는 가장 빠른 연도를 출력한다. 정답이 음수가 나오는 경우는 없다.

*/
int e, s, m;

int main(void){
    SPEEDUP
    cin >> e >> s >> m;
    int date = 1;

    if(e == s && s == m){
        cout << e;
        return 0;
    }

    while (1){
        if((date%15+1 == e) && (date%28+1 == s) && (date%19+1 == m)) break;
        date++;
    }
    cout << date + 1;

}
