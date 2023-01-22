#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//6321 C046 IBM 빼기 1
/*
컴퓨터의 이름이 주어졌을 때, 각 글자를 알파벳 다음 순서로 써서 출력하는 프로그램을 작성하시오.
컴퓨터의 개수 n이 주어진다.
컴퓨터의 이름은 최대 50글자이며, 알파벳 대문자로만 이루어져 있다.
Z의 다음 순서는 A이다.
*/
int n;
vector<string> vec;

void make(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = s[i]+1;
        if(s[i] > 'Z') s[i] = 'A';
    }
    vec.push_back(s);
}

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        make(tmp);
    }

    for(int i = 0; i < n; i++){
        cout << "String #" << i+1 << "\n" << vec.at(i) << "\n\n";
    }


}
