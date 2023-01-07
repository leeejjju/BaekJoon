#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1436 C066 영화감독 숌
/*
종말의 숫자란 어떤 수에 6이 적어도 3개이상 연속으로 들어가는 수를 말한다. 
N(10000이하 자연수)번째 영화의 제목은 세상의 종말 (N번째로 작은 종말의 숫자) 와 같다.
숌이 만든 N번째 영화의 제목에 들어간 숫자를 출력하는 프로그램을 작성하시오.
*/
int n;

int main(void){
    SPEEDUP
    cin >> n;
    int count = 0, jong = 1;
    string tmp = "";

    while (1){
        if(count == n) break;
        tmp = to_string(jong++);
        size_t p = tmp.find("666");
        if (p != string::npos) {
            //cout << tmp << endl;
            count++;
        }
    }

    cout << tmp;

}
