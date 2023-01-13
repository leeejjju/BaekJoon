#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//14487 A104 욱제는 효도쟁이야!!
/*
코드게이트 섬은 해안가를 따라 원형으로 마을들이 위치해있다.
빙빙 도는 원형의 길 외에 다른 길은 존재하지 않는다.
마을의 수 n이 주어진다. (1 ≤ n ≤ 50,000)
i번째 마을과 i+1번째 마을의 이동비용 vi(1 ≤ vi ≤ 1,000)가 n개 주어진다.
모든 마을을 관광하기 위해 필요한 최소 이동비용을 출력한다.
*/
int n;
vector<int> vec;

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    int sum = 0;
    for(int i = 0; i < n-1; i++) sum += vec.at(i);
    cout << sum;

}
