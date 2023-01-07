#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1541 B036 잃어버린 괄호 
/*
괄호 하나만 쓰라는 말은 어디에도 없었ㄴㄴㄷㅐ 혼자 뻘짓함 개억울해 
*/
string n;
vector<int> s;

int calculator(string formula){
    char op = '+';
    int sum = 0;
    string digit = "";
    for(int i = 0; i < formula.length(); i ++){

        if(isdigit(formula[i])){
            digit += formula[i];
        }else{
            if(op == '+') sum += stoi(digit);
            else sum -= stoi(digit);
            digit = "";
            op = formula[i];
        }
    }
    if(op == '+') sum += stoi(digit);
    else sum -= stoi(digit);
    return sum;
}

int main(void){
    SPEEDUP
    cin >> n;
    s.push_back(calculator(n));

    for(int i = 0; i < n.length(); i++){
        //'-' 발견시 이후 계산부분의 max를 찾아서 거기다 괄호 친 계산결과를 정답 후보에 저장. 
        if(n[i] == '-'){
            int MAX = 0, lenth = 0, start = i+1;
            while (1){
                size_t found = n.find('-', start); //본인 이후부터 또다른 - 찾기
                if (found!=string::npos){//찾았으면 
                    //그친구 이전까지 substr시켜서 max검사
                    string substr = n.substr(i+1, (found-i-1));
                    //cout << "now claculate " << substr << ". found index is " << found << endl;
                    if(MAX <= calculator(substr)){
                        MAX = calculator(substr);
                        lenth = (found-i-1);//다음 -찾을때 이놈 이후부터 검사되게 조정 
                    }
                    start = found+1; 
                }else{ //못찾았으면 끝까지 substr시켜서 max검사
                    string substr = n.substr(i+1, n.length()-i);
                    //cout << "now claculate " << substr << endl;
                    if(MAX <= calculator(substr)){
                        MAX = calculator(substr);
                        lenth = n.length()-i;
                    }
                    break;
                }
            }
            string rst = n.replace(i+1, lenth, to_string(MAX)) ;//거기다 괄호 친 수식
            s.push_back(calculator(rst));
        }
    }
    
    sort(s.begin(), s.end());
    cout << s.front();
    //for(int i = 0; i < s.size(); i++) cout << s.at(i) << endl;

}
