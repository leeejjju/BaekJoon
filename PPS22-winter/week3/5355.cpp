#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//5355 A035 화성 수학
/*
@는 3을 곱하고, %는 5를 더하며, #는 7을 빼는 연산자이다.
화성에서는 수학 식의 가장 앞에 수가 하나 있고, 그 다음에는 연산자가 있다.
테스트 케이스의 개수 T가 주어진다.
입력으로 주어지는 수는 정수이거나 소수 첫째 자리까지 주어지며, 0 이상 100 이하이다. 
연산자는 최대 3개 주어진다.
화성 수학식의 결과를 계산한 다음에, 소수점 둘째 자리까지 출력하라.
*/
int t;
vector<float> rst;

int main(void){
    SPEEDUP
    cin >> t;

    float num;
    string oper;

    for(int i = 0; i < t; i++){
        cin >> num;
        getline(cin, oper);

        for(int k = 0; k < oper.length(); k++){
            switch (oper[k]){
            case '@':
                num *= 3.0;
                break;
            case '%':
                num += 5.0;
                break;
            case '#':
                num -= 7.0;
                break;
            default:
                break;
            }
        }

        rst.push_back(num);
    }

    for(int i = 0; i < rst.size(); i++) printf("%.2f\n", rst.at(i));


}
