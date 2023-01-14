#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1026 A018 보물
/*
S = A[0] × B[0] + ... + A[N-1] × B[N-1](N은 50 이하의 자연수)
S의 값을 가장 작게 만들기 위해 A의 수를 재배열하자.
S의 최솟값을 출력하는 프로그램을 작성하시오.
*/
int n;
vector<int> a, b;
int func(int a, int b){return (a > b);}

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        b.push_back(t);
    }

    sort(a.begin(), a.end(), func);
    sort(b.begin(), b.end());

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += a.at(i)*b.at(i);
    }

    cout << sum;
}
