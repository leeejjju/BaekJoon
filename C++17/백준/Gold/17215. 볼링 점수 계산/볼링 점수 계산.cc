#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// 17215 볼링 점수 계산 

string str;
int score, frame;
int first = -1;
int credit;


//string str 속 주어진 인덱스 idx번의 정수형 점수(0~9)를 반환  
int num(int idx){
    char c = str[idx];
    if(c == 'S') return 10;
    if(c == 'P') return (10 - num(idx-1));
    if(c == '-') return 0;
    return (c - '0');
}

int main(void){
    SPEEDUP
    cin >> str;

    for(int i = 0; i < str.length(); i++){

        //second try of frame 10
        if(frame == 10){
            if(first == -1) break; //skip if it was S
            score += num(first);
            score += num(i);
            if(str[i] == 'P') score += num(i+1);
            break;
        }

        if(first == -1){
            // printf("#current score: %d\n", score);
            frame++;
            // printf("[frame %d]\n", frame);
            if(str[i] == 'S'){
                score += num(i);
                score += num(i+1);
                score += num(i+2);
                // printf("add S score and %d, %d\n", num(i+1), num(i+2));
            }else first = i;
        }else{
            score += num(first);
            score += num(i);
            if(str[i] == 'P') 
            {
                score += num(i+1);
                // printf("add P score %d and %d\n", num(i), num(i+1));
            }
            first = -1;
        }
        // printf("%c \n", str[i]);

    }

    cout << score;
    return 0;
}
