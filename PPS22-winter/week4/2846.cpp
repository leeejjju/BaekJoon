#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2846 C071 오르막길
/*
측정한 높이는 길이가 N인 수열로 나타낼 수 있다. 여기서 오르막길은 적어도 2개의 수로 이루어진 높이가 증가하는 부분 수열이다. 
오르막길의 크기는 부분 수열의 첫 번째 숫자와 마지막 숫자의 차이이다.
측정한 높이의 수이자 수열의 크기인 N(1 ≤ N ≤ 1000)이 주어진다.
N개의 양의 정수 Pi(1 ≤ Pi ≤ 1000)가 주어진다. 각 숫자는 상근이가 측정한 높이이다.
가장 큰 오르막길의 크기를 출력한다. 만약 오르막길이 없는 경우에는 0을 출력한다.

*/
int n;
vector<int> vec;

int main(void){
    SPEEDUP
    cin >> n;
    int oru = 0, bestOru = 0;
    int past = 0, cur = 0;

    cin >> past;

    for(int i = 0; i < n-1; i++){
        cin >> cur;
        //printf("comparing %d and %d,,,\n", past, cur);
        if(past < cur) {
            oru += (cur-past);
            //printf("we are going up. +%d. oru is %d.\n", cur-past, oru);
        }
        else{
            bestOru = max(bestOru, oru);
            //printf("best oru is %d for now.\n", bestOru);
            oru = 0;
        }
        past = cur;
    }

    bestOru = max(bestOru, oru);
    cout << bestOru;


}
