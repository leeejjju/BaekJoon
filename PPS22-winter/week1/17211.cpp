#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
//17211
/*
정수 N(1 ≤ N ≤ 100)과 현재 재현이의 기분(좋은 날 0, 싫은 날 1)이 주어진다.
기분이 좋은 날의 다음 날도 기분이 좋은 날일 확률, 다음 날은 기분이 싫은 날일 확률, 
기분이 싫은 날의 다음 날이 기분이 좋은 날일 확률, 다음 날도 기분이 싫은 날일 확률이 주어진다
N일 뒤의 재현이의 기분이 좋은 날일 확률과 싫은 날일 확률에 1,000을 곱해 소수점 첫째자리에서 반올림한 수를 차례대로 출력한다. 
절대 오차는 100까지 허용한다.
*/
int n, now;
float gg, gb, bg, bb, pastG, pastB, G, B;

int main(void){
    cin >> n >> now;
    cin >> gg >> gb >> bg >> bb;
    
    //d이게대체뭐임?????
    if(now == 1) pastB = 1.0;
    else pastG = 1.0;
    
    for(int i = 1; i <= n; i++){
        G = gg*pastG + bg*pastB;
		B = gb*pastG + bb*pastB;
		pastG = G;
        pastB = B;
    }
    
    printf("%d\n%d\n", (int)(1000 * pastG), (int)(1000 * pastB));

}