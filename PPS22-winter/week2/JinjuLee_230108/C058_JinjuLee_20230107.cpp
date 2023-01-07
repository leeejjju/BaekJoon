#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//11004 C058 k번째 수 
/*
n개의 수가 주어졌을 때 이를 오름차순으로 정렬한 k번째 수를 출력하라. 
*/
int n, k;
vector<int> vec;

int main(void){
    SPEEDUP
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    cout << vec.at(k-1);


}
