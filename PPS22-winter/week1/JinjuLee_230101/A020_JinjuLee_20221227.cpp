#include <iostream>
#include <string.h>
using namespace std;
//2455
//4개의 역에 대해 기차에서 내린 사람 수와 탄 사람 수가 주어졌을 때, 기차에 사람이 가장 많을 때의 사람 수를 계산하는 프로그램을 작성하시오.

int ppl[5][3]; //내린 사람,탄 사람 잔여 사람 수/ 각 정차역 1-4(0은 출발상태.)

//각 역을 지나며 남은 사람 수는 이전 역에서의 사람수 + 탄 사람 수 - 내린사람 수.


int main(void){
    int maxPPL = 0;
    for(int i = 1; i < 5; i++){
        cin >> ppl[i][0] >> ppl[i][1];
        ppl[i][2] = ppl[i-1][2] - ppl[i][0] + ppl[i][1];
        maxPPL = max(maxPPL, ppl[i][2]);
    }

    //for(int i = 0; i < 5; i++) printf("%d), sub %d, add %d, remain ppl is %d.\n", i, ppl[i][0], ppl[i][1], ppl[i][2]);
    
    cout << maxPPL;





    

}