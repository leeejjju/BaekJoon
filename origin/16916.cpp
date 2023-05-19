#include <iostream>
#include <cstring>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//16916 부분 문자열
/*
부분 문자열이란 문자열의 연속된 일부를 의미한다. 
주어진 S와 P에 대하여 P가 S의 부분 문자열이면 1, 아니면 0을 출력하라

rmsep근데 왜째서 find는 안되는디 strstr는 되는것이지 
*/
char S[1000001], P[1000001];

int main(void){
    SPEEDUP
    cin >> S >> P;
    if(strstr(S, P)) cout << 1;
    else cout << 0;

}

