#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2775 A032 부녀회장이 될테야
/*
a층의 b호에 살려면 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다
아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.
k층에 n호에는 몇 명이 살고 있는지 출력하라.
두 정수 1 ≤ k, n ≤ 14
각각의 Test case에 대해서 해당 집에 거주민 수를 출력하라.
*/
int n, k, t;
int dp[15][15]; //dp[k][n] k층의 n호에 살고 있는 사람 수.
vector<int> vec;

int ppl(int k, int n){
    if(k == 0) return n;
    else if(dp[k][n] == 0){
        for(int i = 1; i <= n; i++){
            dp[k][n] += ppl(k-1, i);
        }
    }
    return dp[k][n];
}

int main(void){
    SPEEDUP
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> k >> n;
        cout << ppl(k,n) << "\n";
    }


}
