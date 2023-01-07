#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1181 C057 단어정렬 
/*
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000)
길이가 짧은 것부터
길이가 같으면 사전 순으로
같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다.
*/
int n;
vector<string> vec;
bool func(string a, string b){
    if(a.length() == b.length()){
        return (a < b);
    }else return (a.length() < b.length());
}

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        vector<string>::iterator p = find(vec.begin(), vec.end(), a);
        if(p == vec.end()) vec.push_back(a);
    }

    sort(vec.begin(), vec.end(), func);

    for(int i = 0; i < vec.size(); i++) cout << vec.at(i) << "\n";


}
