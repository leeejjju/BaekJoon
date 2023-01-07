#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//3135
/*
첫 번째 버튼은 주파수를 1MHz 증가시킨다.
두 번째 버튼은 주파수를 1MHz 감소시킨다.
나머지 N개의 버튼은 즐겨찾기 기능으로, 미리 지정된 주파수로 이동한다.
주파수 A에서 B로 갈 때 눌러야 하는 가장 적은 버튼수를 구해주자.

A와 B가 주어진다 (1 ≤ A, B < 1000, A ≠ B). 정수 N이 주어진다 (1 ≤ N ≤ 5).
N개의 줄엔 미리 지정되어 있는 주파수가 주어진다 (주파수는 1000 보다 작다).
*/
int a, b, n;
vector<pair<int,int>> vec;
bool func(pair<int,int> a, pair<int,int>b){ return (a.second < b.second); }


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> a >> b >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        pair<int,int> tmp = {t,abs(t-b)};
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end(), func);

    int count = 0;
    
    if(vec.front().second < abs(a-b)){
        count ++;
        a = vec.front().first;
    }

    while (1){
        if(a == b) break;
        else if(a > b) a--;
        else a++;
        count++;
    }

    cout << count;

}