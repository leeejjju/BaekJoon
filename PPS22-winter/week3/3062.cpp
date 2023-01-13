#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//3062 A108 수 뒤집기
/*
124와 같이 원래 수와 뒤집은 수를 합한 수가 좌우 대칭이 되는지 테스트 하는 프로그램을 작성하시오.
테스트 케이스의 개수 T, 정수 N(10 ≤ N ≤ 100000)이 주어진다.
좌우 대칭이 되면 YES를 아니면 NO를 한 줄에 하나씩 출력한다.
*/
int t;
vector<string> vec;

string getNum(string s){
    int ori = stoi(s);
    reverse(s.begin(), s.end());
    return to_string(ori + stoi(s));
}

int main(void){
    SPEEDUP
    cin >> t;
    for(int i = 0; i < t; i++){
        string a;
        cin >> a;
        a = getNum(a);
        string tmp = a;
        reverse(a.begin(), a.end());
        if(a.compare(tmp)) cout << "NO\n";
        else cout << "YES\n";
    }

}
