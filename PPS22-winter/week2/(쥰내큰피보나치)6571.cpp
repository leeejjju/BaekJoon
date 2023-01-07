#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//6571 C037 피보나치 수의 개수
/*
두 수 a와 b가 주어졌을 때, 구간 [a, b]에 포함되는 피보나치 수의 개수를 구하는 프로그램을 작성하시오.
*/
int a, b;
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
    cin >> a >> b;
    dp[1] = 1;
    dp[2] = 2;

    cout << a << " " << b << endl;

100자리수 시발롬아... 

    int n = 1, count = 0;

    while (1){
        long long num = fibo(n);
        if(num > b) break;
        else if(num >= a) count++;
        n++;
    }
    cout << count;
}
