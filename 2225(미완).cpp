//baekjoon 2225
#include <iostream>
using namespace std;

/*
0부터 N까지의 정수 K개를 더해서 그 합이 N이 되는 경우의 수를 구하는 프로그램을 작성하시오.
덧셈의 순서가 바뀐 경우는 다른 경우로 센다(1+2와 2+1은 서로 다른 경우). 
또한 한 개의 수를 여러 번 쓸 수도 있다.
*/
int n, k;

//dp[n][k] : 0부터 n까지의 수 k개를 더해서 그 값이 n이 되는... 
int dp[200][200];

int calcDP(int n, int k);

int main(){

    
    cin >> n >> k;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < k; j++){
    //         dp[i][j] = 1;
    //     }
    // }

    //dp[n][k]를 구하는 함수
    cout << calcDP(n, k);



    return 0;
}

//0부터 10까지의 수 n개를 더해 k를 만드는 경우의 수 
int calcDP(int n, int k){

    if(n <= 1){
        return (dp[n][k] = 1);
    }else if(dp[n][k] != 0){
        return dp[n][k];
    }
    int sum = 0;
    for(int i = 0; i <= 10; i++){
        int a = 0;

        if(k-i < 0) continue;

        if(dp[n-1][k-i] != 0){ //이미 있는 dp면 그거 쓰고
            a = dp[n-1][k-i];
        }else{
            a = calcDP(n-1, k-i);
        }

        sum += a;
    }
    dp[n][k] = sum;
    printf("dp[%d][%d] is %d\n", n, k, sum);
    return sum;
}