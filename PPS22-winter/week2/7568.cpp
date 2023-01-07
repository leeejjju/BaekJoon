#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//7568 C068 덩치
/*
몸무게가 x kg이고 키가 y cm라면 이 사람의 덩치는 (x, y)로 표시된다.
A 와 B의 덩치가 (x, y), (p, q)라고 할 때 x > p 그리고 y > q 이라면 A가 B의 덩치보다 더 크다
각 사람의 덩치 등수는 자신보다 더 "큰 덩치"의 사람의 수로 정해진다.
자신보다 더 큰 덩치의 사람이 k명이라면 그 사람의 덩치 등수는 k+1이 된다.
같은 덩치 등수를 가진 사람은 여러 명도 가능하다. 
2 ≤ N ≤ 50, 10 ≤ x, y ≤ 200
*/
int n;
vector<pair<int,int>> vec;
int dung[51];

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        pair<int,int> tmp = {x,y};
        vec.push_back(tmp);
    }

    for(int i = 0; i < n; i++){
        dung[i] = 1;
        for(int k = 0; k < n; k++){
            //본인(i)보다 큰 덩치를 만나면 덩치등수++;
            if(vec.at(i).first < vec.at(k).first && vec.at(i).second < vec.at(k).second){
                dung[i]++;
            }
        }
    }

    for(int i = 0; i < n; i++) 
        //cout << vec.at(i).first << " : " << vec.at(i).second << " : " << dung[i] << endl;
        cout << dung[i] << " ";

}
