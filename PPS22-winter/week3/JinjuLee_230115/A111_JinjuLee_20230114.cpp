#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//9546 A111 3000번 버스 
/*
3000번 버스는 버스 정류장마다 타고 있는 승객의 수의 정확히 절반과 반 명(0.5명)의 승객이 내린다.
총 k개의 정류장에서 승객이 내렸고 마지막 정류장에서 승객이 없었으며 누구도 다치지 않았다면 
맨 처음 타고있던 승객은 몇명인가.
각각의 테스트 케이스에는 정류장의 수 k를 입력받는다. 1 ≤ k ≤ 30.
한 줄에 처음 버스에 타고있던 승객의 수를 출력한다.
*/
int n, k;
vector<int> r;

int main(void){
    SPEEDUP
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> k; //정류장의 수
        int ppl = 0; //tq다치지않는다는게 이 의미였냐고... 버스의 사람들은 항상 온전한 형태다 뭐 이런tq 플롯해서 계속 틀린거였음 
        for(int o = 0; o < k; o++){
            ppl = ppl * 2 + 1;
        }
        r.push_back(ppl);
    }
    for(int i = 0; i < n; i++) cout << r.at(i) << "\n";
}
