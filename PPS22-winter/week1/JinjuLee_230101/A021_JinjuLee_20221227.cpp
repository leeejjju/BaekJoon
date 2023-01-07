#include <iostream>
#include <vector>
using namespace std;

//2010
/*
멀티탭의 개수 N(1 ≤ N ≤ 500,000) 
각 멀티탭이 가진 플러그 수(<=1000)
최대로 전원에 연결될 수 있는 컴퓨터의 수를 출력하라
*/

int n, tmp, sum;

/*
플러그가 하나라면 모든 멀티탭들은 서로 연결되어야 함. 
즉 본인이 가진 플러그수의 하나는 다음 멀티탭을 위해 할당되어야 함(마지막 멀티탭 제외)
결국 각 멀티탭들이 플러그 수 총합 - 멀티탭 갯수 + 1이 꽂을 수 있는 컴퓨터 수임. 
*/

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        sum += tmp;
    }
    sum -= n;
    sum ++;
    cout << sum;

}