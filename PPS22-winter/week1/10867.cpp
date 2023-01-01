#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//10867
/*
수의 개수 N (1 ≤ N ≤ 100,000), 이 수는 절댓값이 1,000보다 작거나 같은 정수
N개의 정수를 오름차순으로 정렬, 같은 정수는 한 번만 출력
*/
int n;
vector<int> p;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        vector<int>::iterator t = find(p.begin(), p.end(), tmp);
        if(t == p.end()) p.push_back(tmp);
    }

    sort(p.begin(), p.end());

    for(int i = 0; i < p.size(); i++) cout << p.at(i) << " ";
}

