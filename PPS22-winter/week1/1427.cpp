#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//1427
/*
정렬하려고 하는 수 N(1,000,000,000 이하의 자연수)
자리수를 내림차순으로 정렬한 수를 출력
*/
string n;
vector<int> vec;
bool desc(int i,int j){ return (i>j); }

//string으로 받아서 각 char를 int 변환해 벡터에 넣은 뒤 sort
int main(void){

    cin >> n;
    for(int i = 0; i < n.length(); i++) vec.push_back(n[i]-48);
    sort(vec.begin(), vec.end(), desc);
    for(int i = 0; i < vec.size(); i++) printf("%d", vec.at(i));

}