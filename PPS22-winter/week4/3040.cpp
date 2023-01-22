#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//3040 C036 백설 공주와 일곱 난쟁이
/*
총 아홉개 줄에 1보다 크거나 같고 99보다 작거나 같은 자연수가 주어진다.
모든 숫자는 서로 다르다. 또, 항상 답이 유일한 경우만 입력으로 주어진다.
총합이 100이 되는 일곱 난쟁이의 모자에 쓰여 있는 수를 한 줄에 하나씩 출력한다.
*/


int main(void){
    SPEEDUP
    int n;
    int nan[9];

    for(int i = 0; i < 9; i++) cin >> nan[i];

    int i, k, o;

    for(i = 0; i < 9; i++){
        for(k = 0; k < 9; k++){
            int sum = 0;
            if(k == i) continue;
            for(o = 0; o < 9; o++){
                if(o != i && o != k) sum += nan[o];
            }
            if(sum == 100) goto exit;
            sum = 0;
        }
    }

    exit:

    for(int o = 0; o < 9; o++){
        if(o != i && o != k) printf("%d\n", nan[o]);
    }


}
