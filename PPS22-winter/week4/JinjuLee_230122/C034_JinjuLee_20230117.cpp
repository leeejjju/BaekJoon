#include <iostream>
using namespace std;
//2839 C034 설탕 배달
/*정확한 N킬로그램의 설탕을 배달하기 위해 3키로, 5키로 봉지를 사용할 수 있을 때 
배달하기 위한 최소 봉지의 갯수를 구하라 (3 ≤ N ≤ 5000), 정확하게 N킬로그램을 만들 수 없다면 -1을 출력 */

int main(void){
    
    int N, count = 0;
    scanf("%d", &N);
    
    while(N >= 3){
        if(N%5 == 0){
            count += N/5;
            N = 0;
            break;
        }else{
            N -= 3;
            count ++;
        }
    }

    if(N != 0) printf("-1"); 
    else printf("%d", count); 

    return 0;
}
