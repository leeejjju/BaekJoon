#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1699
/*
주어진 자연수 N(1 <= N <= 100000)을 제곱수들의 합으로 표현할 때 그 항의 최소 개수를 구하라
*/
int N;
vector<int> square; //all square numbers less then N
vector<int> DP; 


int LETMENAME(int n){
    //already got
    if(DP[n] != 0 || n < 1) return DP[n];

    int m = 100000;
    for(int i = 0; i < square.size(); i++){
        int s = square[i];
        if (s > n) break;
        if(DP[n-s] == 0) DP[n-s] = LETMENAME(n-s);
        m = min(m, DP[n-s]+1 );
    }
    return (DP[n] = m);

}

int main(void){
    SPEEDUP
    int i = 1, n = 1;

    cin >> N;
    DP.resize(N+1);
    DP[1] = 1;
    while(n <= N){
        square.push_back(n);
        DP[n] = 1;
        i++;
        n = i*i;
    }
    cout << LETMENAME(N) << "\n";

}
