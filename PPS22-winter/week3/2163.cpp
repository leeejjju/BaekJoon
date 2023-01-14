#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2163 A031 초콜릿 자르기
/*
정화는 N×M 크기의 초콜릿을 하나 가지고 있다. 
정화는 초콜릿을 계속 쪼개서 총 N×M개의 조각으로 쪼개려고 한다.
두 정수 N, M(1 ≤ N, M ≤ 300)이 주어진다.
초콜릿의 크기가 주어졌을 때, 이를 1×1 크기의 초콜릿으로 쪼개기 위한 최소 쪼개기 횟수를 구하라.
*/
int n, m;

int main(void){
    SPEEDUP
    cin >> n >> m;
    cout << n*m-1;
}
