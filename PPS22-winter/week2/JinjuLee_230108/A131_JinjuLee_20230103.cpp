#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;
//2108
/*
산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
N(1 ≤ N ≤ 500,000)개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.
정수의 절댓값은 4,000을 넘지 않는다.
*/
long double a, MAX = -5000, MIN = 5000, choiBin;
vector<pair<int,int>> vec; 
vector<int> choiBins, normal;
bool func(pair<int,int>n){
    return (n.first == a);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long double n, sum =0 ;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        cin >> a;
        sum += a;
        MAX = max(MAX, a);
        MIN = min(MIN, a);

        vector<pair<int,int>>::iterator t = find_if(vec.begin(), vec.end(), func);
        normal.push_back(a);

        if(t == vec.end()) {
            pair<int,int> tmp = {a, 1};
            vec.push_back(tmp);
        }else{
            (*t).second ++;
        }

    }

    //cout << "-----------------------------------\n";
    
    long double rst = round(sum/n);
    if(rst == -0) cout << 0 << "\n";
    else cout << rst  << "\n";
    
    sort(normal.begin(), normal.end());
    cout << normal.at(normal.size()/2)<< "\n"; //중앙값

    for(int i = 0; i < vec.size(); i++) {
        if(choiBin <= vec.at(i).second){
            if(choiBin != vec.at(i).second){
                choiBin = vec.at(i).second;
                choiBins.clear();
            }
            choiBins.push_back(vec.at(i).first);
        }
    }

    if(choiBins.size() > 1){//최빈값
        sort(choiBins.begin(), choiBins.end());
        cout << choiBins.at(1) << "\n"; 
    }else cout << choiBins.front() << "\n";
    
    cout << MAX-MIN << "\n"; //범위


}