#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2798 C067 블랙잭
/*
N(3 ≤ N ≤ 100)장의 카드에 써져 있는 숫자가 주어졌을 때, 
M(10 ≤ M ≤ 300,000)을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오
합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우만 입력으로 주어진다.
*/
int n, m;
vector<int> vec, rst;

int main(void){
    SPEEDUP
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i) continue;
            for(int k = 0; k < n; k++){
                if(k == i || k == j) continue;
                int tmp = vec[i]+vec[j]+vec[k];
                if(tmp <= m) rst.push_back(tmp);
            }
        }
    }

    sort(rst.begin(), rst.end());
    cout << rst.back();


}
