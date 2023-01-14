#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//5598 A050 카이사르 암호 
/*
카이사르는 알파벳 문자를 3개씩 건너뛰어 적었다고 한다.
대문자 알파벳으로 구성된 카이사르 단어를 원래 단어로 돌려놓는 프로그램을 작성하시오.
최대 1000자 이하이다.
*/
string n;

int main(void){
    SPEEDUP
    cin >> n;
    string decode = "";
    for(int i = 0; i < n.length(); i++){
        int caesar = (n[i]-3);
        if(caesar < 'A') caesar += 26;
        decode += caesar;
    }
    cout << decode;
}
