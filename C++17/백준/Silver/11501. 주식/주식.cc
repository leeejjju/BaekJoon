#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//11501

int T, N, sellPrice;
long long maxReturn;
vector<int> stock;

int main(void){
    SPEEDUP
    cin >> T;
    for(int t = 0; t < T; t++){
        //get inputs
        cin >> N;
        for(int i = 0; i < N; i++){
            int n;
            cin >> n;
            stock.push_back(n);
        }
        //init values
        sellPrice = stock.back();
        maxReturn = 0;
        //find max return value
        for(int i = N-1; i >= 0; i--){
            sellPrice = max(sellPrice, stock.at(i)); //update sell price if it worthy
            maxReturn += max(0, (sellPrice - stock.at(i))); //buy and add returns
        }
        //print output and reset vector
        cout << maxReturn << "\n";
        stock.clear();
    }

}