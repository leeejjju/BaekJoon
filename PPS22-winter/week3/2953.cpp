#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2953 A033 나는 요리사다
/*
점수는 1점부터 5점까지 있다. 점수는 다른 사람이 평가해 준 점수의 합이다. 
각 참가자가 얻은 평가 점수가 주어졌을 때, 우승자와 그의 점수를 구하는 프로그램을 작성하시오.
*/
int cham[5], MAX, king;

int main(void){
    SPEEDUP
    for(int i = 0; i < 5; i++){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        cham[i] += a+b+c+d;
        if(cham[i] >= MAX){
            MAX = cham[i];
            king = i;
        }
    }
    cout << king+1 << " " << MAX;
    
}
