#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//1049
/*
끊어진 기타줄의 개수 N(100이하 자연수), 기타줄 브랜드 M개(50이하 자연수)
각 브랜드의 패키지 가격과 낱개의 가격(0이상 1000이하)이 주어진다.
기타줄을 적어도 N개 사기 위해 필요한 돈의 최솟값을 구하라. 
*/
int n, m;
vector<pair<int, int>> package;
int pacMin = 1001, sinMin = 1001;
bool func(pair<int,int> a, pair<int,int> b){return a.first < b.first;}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int pac, sin;
        cin >> pac >> sin;
        pair<int, int> tmp = {pac, pac/6};
        package.push_back(tmp);
        sinMin = min(sinMin, sin);
    }

    sort(package.begin(), package.end(), func);
    pacMin = package.front().second;
    
    int price = 0;

    if(sinMin <= pacMin){
        //cout << "single one is cheepest. price: " << sinMin << "\n";
        price = n*sinMin;
    }else{
        //cout << "package is cheepest. price: " << package.front().first << "\n";
        while (1){
            if(n < 6) break;
            price += package.front().first;
            n -= 6;
        }

        if(package.front().first <= n*sinMin){
            price += package.front().first;
        }else {
            //cout << "purchase " << n << " strings more!\n";
            price += n*sinMin;
        }
        
    }

    cout << price;

}
