#include <iostream>
using namespace std;
//백준 10984
//내 학점을 구해줘
/*
학기의 수 T
과목의 수 N(1 ≤ N ≤ 10, 1 ≤ C ≤ 6, C는 정수)
N개 과목들의 학점 C와 성적 G
G는 {0, 0.7, 1, 1.3, 1.7, 2, 2.3, 2.7, 3, 3.3, 3.7, 4, 4.3} 중 하나

각 학기에 대해 근우의 총 학점과 평점(GPA)을 출력한다. 
정답과의 절대 오차는 10-1까지 허용한다.
*/

int t, n, c, totalC[1000], count[1000];
float g, totalG[1000];

int main(void){

    cin >> t;
    //학기 반복
    for(int i = 0; i < t; i++){
        totalC[i] = 0;
        totalG[i] = 0;
        count[i] = 0;

        cin >> n;

        //과목들 반복
        for(int j = 0; j < n; j++){

            cin >> c >> g;
            totalC[i] += c;
            totalG[i] += g*c;
            
        }
        totalG[i] = totalG[i]/totalC[i];

    }

    for(int i = 0; i < t; i++){

        printf("%d %.1f\n",totalC[i], totalG[i]);

    }

    return 0;
}