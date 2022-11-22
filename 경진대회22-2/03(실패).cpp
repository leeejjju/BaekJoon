#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
/*
각 칸에 0~100이 쓰여진 N*N (3~1000)격자.
K*K 부분격자의 합(해당 범위 모든 칸 수의 합)이 모두 S(0~10^9) 이상이 되기를 원한다.
가능한 K의 >>최소값<<을 구하라 
불가능하면 -1출력. 
*/

int N;
long long S;
int G[1000][1000];
int MAX, MIN = 101;


int main() {
	
	cin >> N >> S;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++){
			cin >> G[i][j];
			MAX = max(MAX,G[i][j]);
			MIN = min(MIN,G[i][j]);
		}
			
	int Kmin = S/MAX;

	
	//불가능해지면 break... 개무식브루트포스인데... 
	
	int K = N+1;
	bool flag = false;
	bool middle = false;
	while(1){
		long long sum;
		
		for(int col = 0; col < N-K+1; col++){
			
			for(int row = 0; row < N-K+1; row++){
				sum = 0;
				middle = false;
				for(int i = col; i < col+K; i++){
					for(int j = row; j < row+K; j++){
						sum += G[i][j];
					}
				}
				//printf("from (%d,%d): K is %d, sum is %d. (S is %d)\n", col, row, K, sum, S);
				if(sum < S) {
					middle = true;
					goto exit;
				}
				
			}
		}
		if(K < Kmin) break;
		K--;
		flag = true;
	}
	
	exit:
	
	//if(!middle) K += 1;
	if(flag) cout << K+1;
	else cout << -1;
	
	
	
	
	
	return 0;
}