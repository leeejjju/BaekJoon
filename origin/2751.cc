#include <iostream>
#include <vector>
#include <algorithm>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2751
//(1 <= N <= 1000000)개의 수가 주어졌을 때 오름차순으로 정렬하여 한 줄에 하나씩 출력하라 
int N;

int comp(int a, int b){ return a<b; }
int main(void){
    SPEEDUP
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; i++) cin >> vec.at(i);
    sort(vec.begin(), vec.end(), comp);
    for(int i = 0; i < N; i++) cout << vec.at(i) << "\n";
    
}
