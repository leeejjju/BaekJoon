#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//10828 A053 스택
/*
입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 
정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 
*/
int n;
stack<int> s;

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        string m;
        int a;
        cin >> m;

        if(m == "push"){
            cin >> a;
            s.push(a);
        }else if(m == "pop"){
            if(s.empty()) cout << "-1\n";
            else{
                cout << s.top() << "\n";
                s.pop();
            }
        }else if(m == "size"){
            cout << s.size() << "\n";
        }else if(m == "empty"){
            int isEmpty = (s.empty())? 1:0;
            cout << isEmpty << "\n";
        }else if(m == "top"){
            if(s.empty()) cout << "-1\n";
            else cout << s.top() << "\n"; 
        }




    }




}
