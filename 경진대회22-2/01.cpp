#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
이벤트의 종류 N개(1~100000), 사용자 M(1~1000)명, 그들이 실행내역 
가장 자주 실행된 이벤트를 찾으라.
*/

int N, M;
vector<vector<int>> LOG;

vector<int> kinds;

bool sortStd (int i,int j) { return (i>j); }

int main() {
	int K, event;
	int count[100000] = {0};
	cin >> N >> M;
	for(int i = 0; i < M; i++){
		cin >> K;
		vector<int> tmp;
		LOG.push_back(tmp);
		for(int j = 0; j < K; j++){
			cin >> event;
			if(count[event] == 0) kinds.push_back(event);
			count[event] ++;
			LOG.at(i).push_back(event);
		}
	}
	int max = 0;
	vector<int> maxValues;
	
	//count의 최대값 찾기, 겹치면 vector에...
	int n = kinds.size();
	for(int i = 0; i < n; i++){
		if(max < count[kinds[i]]){
			max = count[kinds[i]];
			maxValues.clear();
			maxValues.push_back(kinds[i]);
		}else if(max == count[kinds[i]]){
			maxValues.push_back(kinds[i]);
		}
	}
	
	//for(int i = 0; i < n; i++)printf("%d 는 %d개\n", kinds[i], count[kinds[i]]);
	
	sort(maxValues.begin(), maxValues.end(), sortStd);
	for(int i = 0; i < maxValues.size(); i++) printf("%d ", maxValues[i]);

	
	/*
	printf("N is %d, M is %d\n", N, M);
	for(int i = 0; i < M; i++){
		for(int j = 0; j < K; j++)
			printf("%d ", LOG[i].at(j));
		printf("\n");
	}
	*/
	
	
	
	
	
	return 0;
}
