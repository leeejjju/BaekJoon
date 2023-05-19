#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2711 오타맨 고창영 
/*
오타를 낸 위치와 문자열이 주어졌을 때 오타를 지운 문자열을 출력하라
*/

int t, ota;
string str;

int main(void){
    SPEEDUP
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> ota >> str;
        str.erase(ota-1, 1);
        cout << str << "\n";
    }
}
