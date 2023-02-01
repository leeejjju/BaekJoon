#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//4150 B077 피보나치 수 
/*
정수를 입력받아, 그에 해당하는 피보나치 수를 출력하는 프로그램을 작성하여라.
모든 정답은 1000자를 넘지 않는다. ( f(20) = 6765 이므로 4자다. )
*/
int a;
long long dp[1000000];

long long fibo(int n){
    //cout << "try to finding " << n <<"'s fibo number...\n";
    if(n == 1 || n == 2){
        //cout << "base fibo number called.\n";
        return n;
    }else if(dp[n] == 0){
        long long DP = (fibo(n-1) + fibo(n-2));
        //cout << "DP[" << n << "] is " << DP << endl;
        return (dp[n] = DP);
    }else{
        //cout << "found fibo " << n << " on dp!\n";
        return dp[n];
    } 
}

int main(void){
    SPEEDUP
    cin >> a;
    dp[1] = 1;
    dp[2] = 2;
    cout << fibo(a);
}
