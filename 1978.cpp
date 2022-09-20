#include <iostream>
using namespace std;
//백준 1978
//소수 찾기, 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력. 
//N은 100이하, 수는 1,000 이하의 자연수이다.

int n, a;
bool flag;

int main(void){
    int count = 0;

    cin >> n;
    for(int i = 0; i < n; i++){

        flag = true;
        cin >> a;

        for(int j = 2; j < a; j++){
            if(a%j == 0){
                break;
            }
        }
        if(a != 1 && flag) count ++;

    }

    cout << count;


    return 0;
}