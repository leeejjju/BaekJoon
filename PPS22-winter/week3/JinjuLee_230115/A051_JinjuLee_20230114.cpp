#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//5622 A051 다이얼
/*
숫자 1을 걸려면 총 2초가 필요하다. 1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 
한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.
알파벳은 각 다이얼의 숫자를 의미한다. 
알파벳 대문자로 이루어진 단어가 주어진다. (길이는 2 이상 15 이하)
다이얼을 걸기 위해서 필요한 최소 시간을 출력한다.
*/
string n;
string d[10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

int main(void){
    SPEEDUP
    cin >> n;
    int time = 0;
    for(int i = 0; i < n.length(); i++){
        for(int k = 0; k < 10; k++){
            size_t p = d[k].find(n[i]);
            if(p != string::npos){
                time += (k+1);
                break;
            }
        }
    }
    cout << time;
}
