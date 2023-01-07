#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
//17212 B075 달나라 토끼를 위한 구매대금 지불 도우미 
/*
동전의 종류는 1원, 2원, 5원, 7원 이렇게 4종류가 있다
계산을 하는데 동전의 개수가 최소가 되도록 지불하지 않는 것은 불법이다
지불해야하는 금액 N(0 ≤ N ≤ 100,000)이 주어진다.
토끼가 합법적으로 낼 수 있는 동전의 개수를 출력하라.
*/
int n;
int dp[100001]; //index 금액을 지불 위해 필요한 최소 동전 갯수 

int minCoin(int N){ //
    if(N == 1 || N == 2 || N == 5 || N == 7) return 1;
    else if(N == 0) return 0;
    else if(N < 0) return 100001;
    else if(dp[N] != 0) return dp[N];
    else{
        int DP = min({minCoin(N-1), minCoin(N-2), minCoin(N-5), minCoin(N-7)}) + 1;
        //cout << "dp[" << n << "] is " << DP << "\n";
        return dp[N] = DP;
    }
}

int main(void){
    SPEEDUP
    cin >> n;
    cout << minCoin(n);
}
