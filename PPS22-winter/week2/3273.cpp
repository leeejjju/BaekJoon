#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//3273
/*
n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다.
ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 (ai, aj)쌍의 수를 구하는 프로그램을 작성하시오.
(1 ≤ n ≤ 100000, 1 ≤ x ≤ 2000000)
*/
int n, x;
vector<int> vec;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        
        vec.push_back(a);
    }
    cin >> x;

    //더해서 x가 되는 머시기... 딱 서로밖에 없을거 아냐. 일단 정렬, 
    sort(vec.begin(), vec.end());
    //작은거부터 걔랑 짝되는애가 있는지 보는거임. 있으면 카운트증가, 없으면 패스해가믄서
    //그러다 x-1에 도달하면 멈추고. 물론 찾은놈 또 찾으면 안되니까 음... 앞에서 빼는거도 되나? 

    int count = 0;

    while(1){
        if(vec.front() >= x || vec.size() == 0) break;
        int target = x-vec.front();
        vec.erase(vec.begin());

        //cout << "checking about " << vec.front() << ". finding " << target << endl;
        vector<int>::iterator p = find(vec.begin(), vec.end(), target);
        if(p != vec.end()){
            //cout << "found!\n";
            count++;
        }
        
    }
    cout << count;

}