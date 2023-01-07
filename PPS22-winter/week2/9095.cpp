#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//9095
/*
테스트 케이스의 수 T
n(11이하의 양수) n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.
*/
int t, n;
int dp[12]; //index를 1,2,3의 합으로 나타내는 방법의 수 저장 
int get123(int n){
    int DP;
    if(n < 1) DP =  0; //0이하는 0
    else if(n == 1) DP = 1;//1,2,3
    else if(n == 2) DP = 2;//
    else if(n == 3) DP = 4;//
    else if(dp[n] != 0) DP = dp[n]; //이미 있으면 그거 쓰고 
    else DP = (get123(n-1) + get123(n-2) + get123(n-3));
    
    dp[n] = DP;
    return dp[n];
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 12; j++) dp[j] = 0;
        cin >> n;
        cout << get123(n) << "\n";
    }
}
