#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1924
/*
오늘은 2007년 1월 1일 월요일이다. 
2007년 x월 y일은 무슨 요일일까? (x: 1~12, y: 1~31)
1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다. 
*/

int x, y;
char weeks[7][5] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main(void){
    SPEEDUP
    cin >> x >> y;
    int days = 0;
    for(int i = 1; i < x; i++){
        if(i == 2){
            days += 28;
        }else if(i%2 == 1 && i < 8){
            days += 31;
        }else if(i%2 == 0 && i >= 8){
            days += 31;
        }else{
            days += 30;
        }
    }
    days += y;
    printf("%s", weeks[days%7]);

}