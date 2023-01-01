#include <iostream>
using namespace std;
//1267

/*
Y요금제: 기본 10원. 30초마다 10원. (59초는 20원, 60초는 30원) 
M요금제: 기본 15원. 60초마다 15원. (119초는 30원, 120초는 45원)
이용한 통화의 개수 N(20이하 자연수), 각 통화시간(만 이하 자연수)가 주어진다.
싼 요금제의 이름, 요금을 출력하라. 요금이 같을 경우 Y > M 순으로 모두 출력하라.
*/

int n, tmp, ySum, mSum;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        ySum += 10 + tmp/30*10;
        mSum += 15 + tmp/60*15;
    }

    if(ySum == mSum) printf("Y M %d", ySum);
    else if(ySum > mSum) printf("M %d", mSum);
    else printf("Y %d", ySum);
    
}