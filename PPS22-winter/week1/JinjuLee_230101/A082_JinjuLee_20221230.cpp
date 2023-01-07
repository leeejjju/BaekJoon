#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//10814
/*
회원의 수 N(1 ≤ N ≤ 100,000)
나이는 1이상 200이하의 정수, 이름은 100이하의 알파벳 대소문자로 구성됨.
입력은 가입순.
온라인 저지 회원을 나이 순, 나이가 같으면 가입한 순으로 정렬하라. 
*/
int n;
vector<pair<string, int>> p;
bool func(pair<string,int> a, pair<string,int> b){return a.second<b.second;}

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        pair<string, int> tmp = {name, age};
        p.push_back(tmp);
    }

    stable_sort(p.begin(), p.end(), func);

    for(int i = 0; i < n; i++) cout << p.at(i).second << " " << p.at(i).first << "\n";
}

