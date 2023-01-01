#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//11650
/*
점의 개수 N (1 ≤ N ≤ 100,000)
i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 
좌표는 항상 정수이고, 위치가 같은 두 점은 없다.
좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력
*/
int n;
vector<pair<int, int>> point;
//다 벡터에 담고 정렬 두번하는 함수 만들어서 하면 댈듯... 

bool func(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) return (a.second < b.second);
    else return (a.first < b.first);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        pair<int, int> tmp = {x, y};
        point.push_back(tmp);
    }

    sort(point.begin(), point.end(), func);

    for(int i = 0; i < n; i++) cout << point.at(i).first << " " << point.at(i).second << "\n";

}

