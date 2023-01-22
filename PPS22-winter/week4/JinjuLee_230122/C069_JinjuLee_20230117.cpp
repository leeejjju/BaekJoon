#include <iostream>
#include <algorithm>
using namespace std;

//11399 C069 ATM
//N(1 ≤ N ≤ 1,000), (1 ≤ Pi ≤ 1,000)


int P[1000];

int main(void){
    int N, preCount = 0, count = 0, thisCount = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> P[i];
    }

    sort(P, P+N);

    for(int i = 0; i < N; i++){
        //cout << P[i] << " ";
        thisCount = preCount + P[i];
        count += thisCount;
        preCount = thisCount;
    }

    cout << count;


    return 0;
}
