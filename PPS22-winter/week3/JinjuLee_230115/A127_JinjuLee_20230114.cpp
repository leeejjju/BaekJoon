#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1934 A127 최소공배수
/*
테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다.
자연수 A와 B(1 ≤ A, B ≤ 45,000)가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.
*/
int n, a, b;

//hint: 두 수의 최소공배수는 두 수의 곱을 최대공약수로 나눈 것과 같다.

//(a>b)최대공약수 구하는 친구: 유클리드 호제법 이용
int MINS(int a, int b){
    if(a%b == 0) return b;
    else return MINS(b, a%b);
}

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << a*b/MINS(max(a,b), min(a,b)) << "\n";
    }
}
