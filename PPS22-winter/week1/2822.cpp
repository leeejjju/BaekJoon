#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//2822
/*
참가자는 총 8개 문제를 푼다. 문제를 풀지 못한 경우에는 0점을 받는다. 참가자의 총 점수는 가장 높은 점수 5개의 합이다.
참가자의 8개 문제 점수가 주어졌을 때, 총 점수를 구하는 프로그램을 작성하시오.
점수는 0이상 150이하의 정수이다. 모든 문제에 대한 점수는 서로 다르다.
참가자의 총점, 어떤 문제가 최종 점수에 포함되는지를 문제 번호가 증가하는 순서로 출력하라.
*/
vector<pair<int, int>> point;//문제번호, 배점으로 구분된 배열 
vector<int> num; //총점에 반영된 문제 번호들의 배열 
bool func(pair<int,int> a, pair<int,int> b){return (a.second > b.second);}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for(int i = 0; i < 8; i++){
        int score;
        cin >> score;
        pair<int, int> tmp = {i+1, score};
        point.push_back(tmp);
    }

    sort(point.begin(), point.end(), func);

    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += point.at(i).second;
        num.push_back(point.at(i).first);
    } 
    cout << sum << "\n";

    sort(num.begin(), num.end());
    
    for(int i = 0; i < 5; i++) cout << num.at(i)<< " ";
   
}