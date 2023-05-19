#include <iostream>
using namespace std;
//백준 2581
//소수
/*자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 
이들 소수의 합과 최솟값을 찾기. M과 N은 10,000이하의 자연수, M<= N
M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력
*/
int m, n, num;
bool flag;

int main(void){
    int count = 0, sum = 0, Min = 10001;

    cin >> m >> n;
    for(int num = m; num <= n; num++){

        flag = true;

        for(int j = 2; j < num; j++){
            if(num%j == 0){
                flag = false;
                break;
            }
        }

        if(num != 1 && flag){ //num이 소수면
            count ++;
            sum += num;
            if(Min > num) Min = num;
        }

    }
    
    
    if(count <= 0) cout << -1;
    else cout << sum << endl << Min;


    return 0;
}

