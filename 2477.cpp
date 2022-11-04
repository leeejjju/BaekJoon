#include <iostream>
using namespace std;
//백준 2477
/*1m2의 넓이에 자라는 참외 개수를 헤아린 다음, 참외밭의 넓이를 구하면 
비례식을 이용하여 참외의 총개수를 구할 수 있다.

참외밭은 ㄱ-자 , ㄱ-자를 90도, 180도, 270도 회전한 모양(┏, ┗, ┛ 모양)의 육각형이다. 

1m2의 넓이에 자라는 참외의 개수를 나타내는 양의 정수 K (1 ≤ K ≤ 20)
육각형의 임의의 한 꼭짓점에서 출발하여 반시계방향으로 둘레를 돌면서 지나는 변의 방향과 길이 (1 이상 500 이하의 정수)
동쪽은 1, 서쪽은 2, 남쪽은 3, 북쪽은 4로 나타낸다.
	4
2		1
	3
*/

int main() {
	int K;
	int N[6][2];
	int tmp[6][2];
	int max = 0, maxIndex = 0, secondIndex = 0;
	int startIndex = 0;
	
	cin >> K;
	for(int i = 0; i < 6; i++){
		cin >> N[i][0] >> N[i][1];
		if(max < N[i][1]){
			max = N[i][1];
			maxIndex = i;
		}
	}
	
	//양옆 중 더 큰놈
	int left = (maxIndex+1)%6, right = (maxIndex-1)%6;
    if(right < 0) right += 6;
	secondIndex = (N[left][1] > N[right][1])? left : right;
	//printf("max is %d, second is %d\n", N[maxIndex][1], N[secondIndex][1] );
	
	int srt[5] = {0, 1, 3, 2, 4};
    if(N[maxIndex][0] == 4 && N[secondIndex][0] == 1) startIndex = secondIndex;
    else if(N[maxIndex][0] == 1 && N[secondIndex][0] == 4) startIndex = maxIndex;
    else startIndex = (srt[N[maxIndex][0]] > srt[N[secondIndex][0]])? maxIndex : secondIndex;
    
	//printf("start point index is %d (%d)\n", startIndex,N[startIndex][1] );
	
	for(int i = 0; i < 6; i++){
		int s = (startIndex+i)%6;
		tmp[i][0] = N[s][0];
		tmp[i][1] = N[s][1];
	}
	
	//for(int i = 0; i < 6; i++) cout << tmp[i][0] << " : "<< tmp[i][1] << "\n";
	int big = tmp[0][1] * tmp[1][1];
	int small = tmp[3][1] * tmp[4][1];
	//printf("big is %d. small is %d, answer is %d", big, small, (big-small)*K);
	cout << (big-small)*K;
	
	return 0;
}









