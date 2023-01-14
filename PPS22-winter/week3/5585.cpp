#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//5585 A110 거스름돈
/*
JOI잡화점에는 잔돈으로 500엔, 100엔, 50엔, 10엔, 5엔, 1엔이 충분히 있고, 
언제나 거스름돈 개수가 가장 적게 잔돈을 준다.
입력은 타로가 지불할 돈(1 이상 1000미만의 정수) 1개
물건을 사고 카운터에서 1000엔 지폐를 한장 냈을 때, 받을 잔돈에 포함된 매수를 출력하시오.
*/
int n;
int coin[6] = {500, 100, 50, 10, 5, 1};

int main(void){
    SPEEDUP
    cin >> n;
    n = 1000-n;
    int count = 0;

    for(int i = 0;i < 6; i++){
        if(n >= coin[i]){
            //printf("%d x %d, remain is %d\n", coin[i], n/coin[i], n%coin[i]);
            count += n/coin[i];
            n = n%coin[i];
        }
    }

    cout << count;

}
