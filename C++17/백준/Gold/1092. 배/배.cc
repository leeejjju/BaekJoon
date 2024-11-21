#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <stack>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//1092


int N, M, tmp;
vector<int> crane, box;
vector<int> crane_box;


int main(void){
    SPEEDUP
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        crane.push_back(tmp);
        crane_box.push_back(0);
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        box.push_back(tmp);
    }

    sort(crane.begin(), crane.end());
    sort(box.begin(), box.end());

    if(crane[N-1] < box[M-1]){
        cout << -1;
        return 0;
    }

    //담당박스 분류작업 
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(box[i] <= crane[j]){
                crane_box[j]++;
                break;
            }
        }
    }

    int cnt = 0; //크레인 가동 횟수 
    //총 박스 갯수(M)이 소진되기까지...
    while(M > 0){
        cnt++;
        //크레인 N개를 용적량 작은 것부터 차례로 작동 
        for(int i = 0; i < N; i++){
            //뭐가 들어있으면 꺼내
            if(crane_box[i]){
                crane_box[i]--;
                M--;
            }
            //뭐가 안 들어있으면 자기 밑으로 있는지 뒤적여봐... 
            else{
                for(int j = i-1; j >= 0; j--){
                    if(crane_box[j]){
                        crane_box[j]--;
                        M--;
                        break;
                    }
                }
            }
        }
    }

    cout << cnt;
    return 0;

}

