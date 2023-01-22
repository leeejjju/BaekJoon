#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//2783 C033 삼각김밥
/*
세븐25의 삼각 김밥 가격 정보 X와 Y가 주어진다. (Y그램 당 X원) (1 ≤ X ≤ 100, 1 ≤ Y ≤ 1,000)
세븐25를 제외한 편의점의 개수 N이 주어진다. (1 ≤ N ≤ 100)
N개의 줄에는 i번째 편의점의 삼각 김밥 가격 정보 Xi와 Yi가 주어진다. 
(Yi그램 당 Xi원) (1 ≤ Xi ≤ 100, 1 ≤ Yi ≤ 1,000)
삼각 김밥 1,000그램 가격의 최저가를 출력한다. 정답과의 오차는 0.01까지 허용한다.
*/
double n, x, y;
vector<double> vec;

double getSize(double x, double y){ 
    double per = x/y;
    return per*1000; 
}

int main(void){
    SPEEDUP
    cin >> x >> y;
    vec.push_back(getSize(x, y));

    double MIN = vec.front();

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        vec.push_back(getSize(x, y));
        MIN = min(MIN, vec.back());
    }
    printf("%.2f\n",MIN);

}
