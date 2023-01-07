#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
using namespace std;
//11656
/*
baekjoon의 접미사는 baekjoon, aekjoon, ekjoon, kjoon, joon, oon, on, n
문자열 S는 알파벳 소문자로만 이루어져 있고, 길이는 1,000보다 작거나 같다.
S의 접미사를 사전순으로 한 줄에 하나씩 출력하라
*/
//string n;
char n[1001];
vector<string> vec;
/*
이..일단 거시기... 그... 배열 중간 원소의 주소값을 갖다 쓰면 그위치~끝까지로 인식되는걸 이용하자.
array를 써야할 듯. 
그으리고 그렇게 나온 문자열들을 vector에 저장해서 sort해서 출력.
*/
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;

    for(int i = 0; i < strlen(n); i++) vec.push_back(&n[i]);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < strlen(n); i++) cout << vec.at(i) << "\n";
    

}