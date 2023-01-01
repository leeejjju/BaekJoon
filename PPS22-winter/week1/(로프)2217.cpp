#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//2217
/*
N(1 ≤ N ≤ 100,000)개의 로프. 병렬로 연결하면 각각의 로프에 걸리는 중량을 나눌 수 있다
k개의 로프로 중량 w인 물체를 들어올릴 때, 각각의로프에는 w/k 만큼의 중량이 걸리게 된다.
각 로프가 버틸 수 있는 최대 중량은 10000이하의 자연수.
로프들을 이용하여 들어올릴 수 있는 물체의 최대 중량을 구해내는 프로그램을 작성하시오.
*/
int n;
vector<int> rope;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i< n; i++){
        int a;
        cin >> a;
        rope.push_back(a);
    }
    
    //for(int i = 0; i< n; i++) cout << rope.at(i) << endl;
    

}
