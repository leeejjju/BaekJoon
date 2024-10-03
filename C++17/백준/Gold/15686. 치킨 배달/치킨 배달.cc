#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <limits>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// 15686

int N, M, num_house, num_chicken, tmp, result = INT32_MAX;
vector<pair<int,int>> house; //position of houses
vector<pair<int,int>> chicken; //position of chickens
vector<int> selected; //selected chicken = 1, others = 0

//get distance of two points
int dist(pair<int,int> a, pair<int,int> b){
    return (abs(a.first - b.first) + abs(a.second - b.second));
}

//get the city's chicken distance with the selected case
int chick_dist(){
    int sum = 0;
    for(int h = 0; h < num_house; h++){
        int min_dist = INT32_MAX;
        for(int c = 0; c < num_chicken; c++){
            if(selected[c]){
                min_dist = min(min_dist, dist(house[h], chicken[c]));
            }
        }
        sum += min_dist;
    }
    return sum;
}


int main(void){
    SPEEDUP;
    int tmp;

    //get the information of house, chicekn 
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> tmp;
            if(tmp == 1) house.push_back({i, j});
            else if(tmp == 2) chicken.push_back({i, j});
        }
    }
    num_house = house.size();
    num_chicken = chicken.size();

    for(int i = 0; i < (num_chicken - M); i++) selected.push_back(0);
    for(int i = 0; i < M; i++) selected.push_back(1);
    do{
        result = min(result, chick_dist());
    }while(next_permutation(selected.begin(), selected.end()));

    cout << result;
    return 0;

}
