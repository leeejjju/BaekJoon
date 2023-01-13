#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//3059 A106 등장하지 않는 문자의 합
/*
문자열 S가 주어졌을 때, S에 등장하지 않는 알파벳 대문자의 아스키 코드 값의 합을 구하는 프로그램을 작성하시오.
*/
string s;
int alpha[26], n;
vector<int> output;
int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int i = 0; i < s.length(); i++) alpha[s[i]-'A'] = 1;
        int sum = 0;
        for(int i = 0; i < 26; i++){
            if(!alpha[i]) sum += (i + 'A');
            alpha[i] = 0;
        }
        output.push_back(sum);
    }
    for(int i = 0; i < n; i++){
        cout << output.at(i) << "\n";
    }
}
