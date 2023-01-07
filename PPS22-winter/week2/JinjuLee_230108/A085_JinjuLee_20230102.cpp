#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//1431 A085
/*
시리얼 번호는 알파벳 대문자 (A-Z)와 숫자 (0-9)로 이루어져 있다.
길이가 다르면, 짧은 것이 먼저 온다.
서로 길이가 같다면, 모든 자리수의 합을 비교해서 작은 합을 가지는 것이 먼저온다. 
둘 조건으로도 비교할 수 없으면, 사전순으로 비교한다. 
숫자가 알파벳보다 사전순으로 작다.
*/

int n;
vector<string> vec;

//문자열의 각 자릿수들 중 숫자인 것만 더한 값을 반환
int sumOfDigit(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            sum += (s[i]-'0');
        }
    }
    return sum;
}

bool func(string a, string b){
    if(a.length() == b.length()){
        if(sumOfDigit(a) == sumOfDigit(b)){
            return (a < b);
        }else{
            return (sumOfDigit(a) < sumOfDigit(b));
        } 
    }else return (a.length() < b.length());
}



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end(), func);

    //cout << "------------------------------------------\n";
    for(int i = 0; i < vec.size(); i++) cout << vec.at(i) << endl;




}
