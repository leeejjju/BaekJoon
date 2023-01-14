#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1193 A105 분수찾기
/*
나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 
지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.
X(1 ≤ X ≤ 10,000,000)가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.
*/
int n;

int main(void){
    SPEEDUP
    cin >> n;

    int count = 0, k = 0;
    int up = 1, down = 1;
    while (1){
        k++;
        for(int i = 1; i <= k; i++){
            if(count++ == n) goto out;
            up = (k%2==0) ? i : k-i+1;
            down = (k%2==0) ? k-i+1 : i;
        }
    }

    out:
        printf("%d/%d", up, down);

}
