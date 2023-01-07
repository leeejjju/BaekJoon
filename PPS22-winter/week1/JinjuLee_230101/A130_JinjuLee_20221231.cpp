#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//10773
/*
정수 K가 주어진다. (1 ≤ K ≤ 100,000)
K개의 정수는 0에서 1,000,000 사이의 값, 정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지운다.
최종적으로 적어 낸 수의 합을 출력하라.
*/
int k, sum;
vector<int> vec;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> k;
    for(int i = 0; i < k; i++){
        int a;
        cin >> a;
        if(a == 0){
            vec.pop_back();
        }else{
            vec.push_back(a);
        }
    }

    for(int i = 0; i < vec.size(); i++){
        sum += vec.at(i);
    }

    cout << sum;



}
