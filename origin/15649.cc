#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
// 15649
/*(1 <= M <= N <= 8)이 주어졌을 때, 
1부터 N까지 자연수 중 중복 없이 M개를 고른 수열을 모두 구하라.*/


//select M number from N and print it when done selecting...(M==0)
void select(vector<int> N, vector<int> S, int M){

    if(M == 0){
        for(int i = 0; i < S.size(); i++) cout << S[i] << " ";
        cout << "\n";
        return;
    }

    for(int i = 0; i < N.size(); i++){
        //make copy
        vector<int> tmp_N(N);
        vector<int> tmp_S(S);

        //select one first
        tmp_S.push_back(tmp_N.at(i)); //add to selected vector
        tmp_N.erase(tmp_N.begin() + i); //remove from N vector
        
        //select from others
        select(tmp_N, tmp_S, M-1);
    }
}

int main(void){
    SPEEDUP
    int n, m;
    cin >> n >> m;
    vector<int> N, S;

    for(int i = 1; i <= n; i++) N.push_back(i);
    select(N, S, m);

}


