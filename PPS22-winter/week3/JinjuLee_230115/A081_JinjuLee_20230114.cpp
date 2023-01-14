#include <iostream>
#include <algorithm>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2693 A081 N번째 큰 수
/*
배열 A가 주어졌을 때, N번째 큰 값을 출력하는 프로그램을 작성하시오.
A의 크기는 항상 10이고, 자연수만 가지고 있다. N은 항상 3이다.
케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다.
원소는 1보다 크거나 같고, 1,000보다 작거나 같은 자연수이다.
*/
int n;
int num[10];

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int i = 0; i < 10; i++){
            cin >> num[i];
        }
        sort(num, num+10);
        cout << num[7] << "\n";
    }
}
