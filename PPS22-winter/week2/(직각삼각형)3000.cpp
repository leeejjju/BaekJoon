#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//3000 C035 직각삼각형 
/*
좌표 평면에 점 N개가 있다.
빗변을 제외한 나머지 두 변이 좌표축에 평행한 직각삼각형을 이루는 점 3개를 고르는 방법을 
수를 구하는 프로그램을 작성하시오.

점의 개수 N(3 ≤ N ≤ 100,000), (1 ≤ X,Y ≤ 100,000) 겹치는 점은 없다.

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


}
