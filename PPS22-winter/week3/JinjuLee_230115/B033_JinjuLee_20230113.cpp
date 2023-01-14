#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//10162 B033 전자레인지 
/*
버튼 A, B, C에 지정된 시간은 각각 5분, 1분, 10초이다.
3개의 버튼을 적절히 눌러서 그 시간의 합이 정확히 T(1 ≤ T ≤ 10,000)초가 되도록 해야 한다.
T초를 위한 최소버튼 조작의 A B C 횟수를 첫 줄에 차례대로 출력하라.
해당 버튼을 누르지 않는 경우에는 숫자 0을 출력, 3개의 버튼으로 T초를 맞출 수 없으면 음수 -1을 출력.
*/
int t;
int btn[3];
enum BTN{ A = 300,  B = 60,  C = 10 };

int main(void){
    SPEEDUP
    cin >> t;

    if(t >= A){
        btn[0] = t/A;
        t = t%A;
    }
    if(t >= B){
        btn[1] = t/B;
        t = t%B;
    }
    if(t >= C){
        btn[2] = t/C;
        t = t%C;
    }
    
    if(t != 0) cout << -1;
    else cout << btn[0] << " " << btn[1] << " "<< btn[2];

}


