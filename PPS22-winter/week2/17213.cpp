#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//17213 C030 과일 서리
/*
   N(1 ≤ N ≤ 10) 종류 과일을 재배하는 농장에서 M(N ≤ M ≤ 30)개의 과일을 훔칠 수 있는 경우의 수
*/
int n, m;
//걍 중복조함 공식... nHm = (n+m-1)Cm 이거 쓰되 최소하나씩이니까 m에서 n 뺀거 쓰면 될듯?
int dp[41][41];

int comb(int n, int m){
    if(n < 0 || m < 0) return 0;
    if(dp[n][m] != 0) return dp[n][m]; //있으면 그거 주고
    if(n == m) return 1;
    else if(m == 1) return n;
    else return dp[n][m] = (comb(n-1, m-1) + comb(n-1, m)); //이런 공식이 있나봄...
}

int main(void){
    SPEEDUP
    cin >> n >> m;
    m -= n;//하나씩은 일단 훔쳐두고
    n = n+m-1;
    m = min(m, n-m);

    //s내 작고 소중한 풀이인데 이거 계산하려면 숫자 범위 초과함...개무능한자료형
    /*long h = 1;
    for(int i = 0; i < m; i++) h *= n--; //분모
    for(int i = 0; i < m; i++) h /= m--; //분자 
    cout << h;*/
    
    cout << comb(n,m);


}
