#include <iostream>
#include <vector>
#include <algorithm>
#include<utility>
#include <math.h>
using namespace std;
//baekjoon 14904
/*
과목 수 N (1 ≤ N ≤ 1,000)
과제 마감일까지 남은 일수 d (1 ≤ d ≤ 1,000)
과제의 점수 w (1 ≤ w ≤ 100)
하루에 한 과제만 할 수 있을 때 받을 수 있는 최고점
*/

int N;
int subject[1001][3]; //d, w, isCompleted(0,1)

int main(void){

    int maxDay = 0;
    int score = 0;

    
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        //scanf("%d %d", subject[i][0], subject[i][1]);
        cin >> subject[i][0] >> subject[i][1];
        maxDay = max(maxDay, subject[i][0]);
    }
    

    for(int i = maxDay; i > 0; i--){
        int MAX = 0;
        int maxIndex = 0;
        bool flag = false;
        //during the 'i'st day...
        for(int j = 0; j < N; j++){
            if(subject[j][0] >= i && subject[j][1] > MAX && subject[j][2] == 0){ //유효기간 안의 미해결 과제들 사이에서 max찾아서
                MAX = subject[j][1];
                maxIndex = j;
                flag = true;
            }
        }
        if(flag){
            //printf("day %d : selected one is %d(due date is %d)\n", i, subject[maxIndex][1], subject[maxIndex][0]);
            score += MAX;
            subject[maxIndex][2] = 1;
        }
        
    }

    cout << score;

    

    //for(int i = 0; i < N; i++) printf("%d : %d \n", subject[i].first, subject[i].second);


    //input 받기, 페어.
    //역순 그리디로 점수 더하기...



    return 0;
}