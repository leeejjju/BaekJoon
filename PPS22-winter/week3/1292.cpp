#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1292 A107 쉽게 푸는 문제
/*
1을 한 번, 2를 두 번, 3을 세 번, 이런 식으로 1 2 2 3 3 3 4 4 4 4 5 .. 
이러한 수열을 만들고 어느 일정한 구간을 주면 그 구간의 합을 구하는 것이다
구간의 시작과 끝을 나타내는 정수 A, B(1 ≤ A ≤ B ≤ 1,000)가 주어진다. 
A번째 숫자부터 B번째 숫자까지 합을 구하면 된다.
*/
int a, b;
int main(void){
    SPEEDUP
    cin >> a >> b;
    int num = 1, sum = 0, count = 1;
    while (1){
        for(int i = 0 ; i < num; i++){
            if(count > b){
                cout << sum;
                return 0;
            }
            else if(count++ >= a) sum += num;
        }
        num++;
    }
}
