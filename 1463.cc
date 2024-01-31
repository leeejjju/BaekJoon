#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// 1463
/*
정수(1 <= N <= 10^6)가 주어졌을 때, 다음의 연산들만을 사용해 1로 만드는 최소 연산 수를 출력하라.
1. 3으로 나누어 떨어지면 3으로 나눈다.
2. 2로 나누어 떨어지면 2로 나눈다. 
*/
int N;
vector<int> DP;

int min_calc(int n){
    if(n < 2) return 0; //idk this case
    if(DP[n] != 0) return DP[n]; 

    int m = 10000000;
    if(n%2 == 0){
        if(DP[n/2] == 0) DP[n/2] = min_calc(n/2);
        m = min(DP[n/2]+1, m);
    }
    if(n%3 == 0){
        if(DP[n/3] == 0) DP[n/3] = min_calc(n/3);
        m = min(DP[n/3]+1, m);
    }
    return (DP[n] = m);

}


int main(void){
    SPEEDUP
    cin >> N;
    DP.resize(N+1);
    cout << min_calc(N);


}
