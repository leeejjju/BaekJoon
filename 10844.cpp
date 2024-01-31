#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// 10844
/*
인접한 모든 자리의 차이가 1인 수를 계단 수라고 한다. 
N(1 <= 1 <= 100)이 주어질 때 길이가 N인 계단 수의 갯수를 구하라. 
0으로 시작하는 수는 제외한다. 
정답을 1000000000으로 나눈 나머지를 출력하라. 
*/

int N;
int DP[10][101]; //DP[i][j] = i로 시작하는 N자리 계단수의 수


int main(void){
    SPEEDUP

    cin >> N;
    cout << N;


}