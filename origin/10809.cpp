#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//10809 알파벳 찾기 
/*
각 알파벳에 대해 단어에 포함되어있다면 위치를, 아니라면 -1을 출력하라 
*/
string str;

int main(void){
    SPEEDUP
    cin >> str;
    for(int i = 'a'; i <= 'z'; i++){
        int n = str.find(i);
        if( n != string::npos) cout << n << " ";
        else cout << -1 << " ";
    }
}
