#include <iostream>
#include <set>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1159 A046 농구 경기
/*
선수의 수 N (1 ≤ N ≤ 150)이 주어진다.
각 선수의 성은 알파벳 소문자로만 이루어져 있고, 최대 30글자이다
다섯 명을 선발할 수 없는 경우에는 "PREDAJA" (따옴표 없이)를 출력한다.
선발할 수 있는 경우에는 가능한 성의 첫 글자를 사전순으로 공백없이 모두 출력한다.
*/
int n;
int alpha[26];
set<char> sunbal;

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        alpha[tmp[0]-'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(alpha[i] >= 5) sunbal.insert(i+'a');
    }

    if(sunbal.size() == 0) cout << "PREDAJA";
    else for(set<char>::iterator i = sunbal.begin(); i != sunbal.end(); i++) cout << *i;


}
