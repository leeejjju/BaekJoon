#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//baekjoon 1002
/*
num of test case T
t1's location: x1, y1
distance of t1 and marin r1
t2's location: x2, y2
distance of t2 and marin r2
*/

vector<int> answer;
double get_distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void){
    SPEEDUP
    int T, x1, x2, y1, y2, r1, r2;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> x1 >> y1 >> r1;
        cin >> x2 >> y2 >> r2;
        double d = get_distance(x1, y1, x2, y2);
        int ans = -1;
        if(d == 0 && r1 == r2) ans = -1;
        else if(d < abs(r1 - r2)) ans = 0;
        else if(d == abs(r1 -r2)) ans = 1;
        else if(d == (r1 + r2)) ans = 1;
        else if(d < (r1 + r2)) ans = 2;
        else if(d > (r1 + r2)) ans = 0;
        answer.push_back(ans);
    }
    for(int i = 0; i < T; i++){
        printf("%d\n", answer.at(i));
    }
    
}
