#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//11866 A069 요세푸스 문제
/*
1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다.
순서대로 K번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 
N명의 사람이 모두 제거될 때까지 계속된다.
사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다.
N과 K가 주어졌을 때 (1 ≤ K ≤ N ≤ 1,000) 요세푸스 순열을 출력하라. 
*/
int n, k;
vector<int> circle, Josephus;

int main(void){
    SPEEDUP
    cin >> n >> k;
    for(int i = 1; i <= n; i++) circle.push_back(i);

    int start = 0, targit;
    while (circle.size() > 0){
        targit = (start+(k-1))%circle.size();
        Josephus.push_back(circle.at(targit));
        circle.erase(circle.begin()+targit);
        start = targit;
    }

    cout << "<";
    for(int i = 0;i < Josephus.size()-1; i++){
        cout << Josephus.at(i) << ", ";
    }
    cout << Josephus.back() << ">";
    
    


}
