
//-------------------

#include <iostream>
#include <algorithm>
using namespace std;
/*
구름카드, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, G, O, R, M 14개

주어지는 카드에 이어서 카드를 내야한다... 연속되는 카드는 무한히 낼 수 있다. 

카드의 장수(1~4), 종류, 구름이차례의 문자가 주어진다.(중복x)
최대한 많은 카드를 낸 후 구름이 손에 남아있는 카드의 갯수는? 

입력받고
sort하고
주어진 값으로부터 연속되는 최대갯수를 구하고
N-그갯수 하면 됨 
*/

int N;
char K;
char CARD[14];
bool flag = false;

int main() {
	
	
	//printf("%d %d %d %d %d", '9', 'G'-13, 'O'-20, 'R'-22, 'M'-16);
	//57 71 78 82 77, 58 59 60 61
	int count = 1, index = 0;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> CARD[i];
		if(CARD[i] == 'G') CARD[i] = 58;
		else if(CARD[i] == 'O') CARD[i] = 59;
		else if(CARD[i] == 'R') CARD[i] = 60;
		else if(CARD[i] == 'M') CARD[i] = 61;
		
	}
	cin >> K;
	
	if(K == 'G') K = 58;
	else if(K == 'O') K = 59;
	else if(K == 'R') K = 60;
	else if(K == 'M') K = 61;
	
	
	sort(CARD, CARD+N);
	
	//G, O, R, M을 ascii상 10 11 12 13에 해당하도록... 
	
	for(int i = 0; i < N; i++){
		if(CARD[i] == K){
			flag = true;
			index = i;
		} 
	}
	
	
	//for(int i = 0; i < N; i++) cout << CARD[i] << endl;
	
	if(flag){
		for(int i = index; i < N-1; i++){
			if(CARD[i]+1 == CARD[i+1]){
				count ++;
				//printf("%c %c\n", CARD[i], CARD[i+1]);
			}else break;
		}
		cout << (N - count);
	} 
	else cout << N;
	
	
	return 0;
}