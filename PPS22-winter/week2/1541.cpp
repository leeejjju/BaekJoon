#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1541 B036 잃어버린 괄호 
/*
괄호를 적절히 쳐서 이 식의 값을 최소로 만들려고 한다.
식은 ‘0’~‘9’, ‘+’, 그리고 ‘-’만으로 이루어져 있고, 가장 처음과 마지막 문자는 숫자이다.
연속해서 두 개 이상의 연산자가 나타나지 않고, 5자리보다 많이 연속되는 숫자는 없다.
수는 0으로 시작할 수 있다. 입력으로 주어지는 식의 길이는 50보다 작거나 같다.
*/
string n;

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

    for(int i = 0; i < n.length(); i++){
        //'-' 발견시 이후 계산부분의 max를 찾아서 거기다 괄호 친 계산결과를 정답 후보에 저장. 
        if(n[i] == '-'){
            int MAX = 0, lenth = 0;
            size_t found = n.find('-', i+1); //본인 이후부터 또다른 - 찾기
            if (found!=string::npos){//찾았으면 
                //그친구 이전까지 substr시켜서 그 계산결과를 해당 수식 부분으로 replace(괄호친거임)
                string substr = n.substr(i+1, (found-i-1));
                n.replace(i+1, (found-i-1), to_string(calculator(substr)));
            }else{ //못찾았으면 끝까지 substr
                string substr = n.substr(i+1, n.length()-i);
                n.replace(i+1, (found-i-1), to_string(calculator(substr)));
                break;
            }
        }
    }

    cout << calculator(n);

}
