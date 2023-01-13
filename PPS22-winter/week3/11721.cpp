#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//11721 A047 열개씩 끊어 출력하기
/*
알파벳 소문자와 대문자로만 이루어진 길이가 N(0<N<100)인 단어가 주어진다.
한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.
*/
string n;

int main(void){
    SPEEDUP
    int count = 0;
    cin >> n;
    for(int i = 0; i < n.length(); i++){
        cout << n[i];
        if(++count == 10){
            cout << "\n";
            count -= 10;
        }
    }
}
