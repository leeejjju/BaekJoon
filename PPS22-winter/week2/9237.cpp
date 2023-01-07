#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//9237 B032
/*
묘목 하나를 심는데 걸리는 시간은 1일.
마지막 나무가 다 자란 다음날 이장님을 초대할 것이다.
묘목의 수 N (1 ≤ N ≤ 100,000), 각 나무가 자라는데 며칠이 걸리는지(1 ≤ ti ≤ 1,000,000)
며칠에 이장님을 초대할 수 있는지 가장 작은 값을 출력한다. 묘목을 구입한 날이 1일이다.
*/
int n;
vector<int> vec;

int main(void){
    FAST
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    //가장 오래걸리는 놈부터 심어야겠지 아무래도..? 
    sort(vec.begin(), vec.end());

    int TIME = 0, TODAY = 2;
    while(vec.size() > 0){
        TIME = max(TODAY++ + vec.back(), TIME);
        //printf("palnted %d. time we need is %d day.\n", vec.back(), TIME);
        vec.pop_back();
    }

    cout << TIME;

}
