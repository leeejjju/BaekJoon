#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1065 A126 한수 
/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
1보다 크거나 같고, N(1000이하 자연수)보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
*/
int n;
int num(char c){return c-80;}

int main(void){
    SPEEDUP
    cin >> n;
    int count = (n > 99)? 99 : n;
    if(n < 100){
        cout << n;
        return 0;
    }

    //100부터 n까지 한수 찾기 
    for(int i = count+1; i <= n; i++){
        bool flag = true;
        string tmp = to_string(i);
        int sub = num(tmp[1]) - num(tmp[0]);

        //각 자릿수의 차가 기준점(sub)와 같은지 판별
        for(int k = 1; k < tmp.length(); k++){
            if(sub != num(tmp[k]) - num(tmp[k-1])){
                flag = false;
                break;
            }
        }
        if(flag){
            count ++;
            //cout << tmp << " is hansoo.\n";
        } 
    }

    cout << count;



}
