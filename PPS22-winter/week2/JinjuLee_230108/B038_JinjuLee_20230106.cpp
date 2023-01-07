#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//16435 B038 스네이크버드 
/*
스네이크버드의 주요 먹이는 과일이며 과일 하나를 먹으면 길이가 1만큼 늘어납니다.
스네이크버드는 자신의 길이보다 작거나 같은 높이에 있는 과일들을 먹을 수 있습니다.
과일의 개수 N (1 ≤ N ≤ 1,000) 스네이크버드의 초기 길이 정수 L (1 ≤ L ≤ 10,000)
과일들은 지상으로부터 일정 높이를 두고 떨어져 있으며 i (1 ≤ i ≤ N) 번째 과일의 높이는 hi입니다. 
스네이크버드의 처음 길이가 L일때 과일들을 먹어 늘릴 수 있는 최대 길이를 구하세요.
*/
int n, l;
vector<int> vec;

int main(void){
    SPEEDUP
    cin >> n >> l;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    //움.... 작은것부터 하나씩 먹어 없애고 남은애들 중 자기보다 같거나 작은게 없을 때 break하면..? 
    sort(vec.begin(), vec.end());

    while (1){
        if(vec.front() > l || vec.size() <= 0) break;
        l++;
        //printf("snakeBird ate the fruit of tree %d! now the length is %d\n", vec.front(), l);
        vec.erase(vec.begin());
    }

    cout << l;
    


}
