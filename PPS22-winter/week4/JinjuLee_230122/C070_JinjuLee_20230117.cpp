#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//1931 C070 회의실배정

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(void){
    int N; 
    scanf("%d", &N);
    int st, ed;
    vector< pair<int, int> > H;

    for(int i = 0; i < N; i++){
        scanf("%d %d", &st, &ed);
        pair<int, int> tmp = {st, ed};
        H.push_back(tmp);
    }

    sort(H.begin(), H.end(), comp);

    int count = 1;
    int takenEnd = H[0].second; 
    for(int i = 1; i < N; i++){
        if(takenEnd <= H[i].first){
            takenEnd = H[i].second;
            count ++;
        }
    }

    printf("%d", count);
    return 0;

}
