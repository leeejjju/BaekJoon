#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//백준 2294
/*
n가지 종류의 동전. 가치의 합이 k원이 되도록, 동전의 개수가 최소.
구성이 같은데, 순서만 다른 것은 같은 경우
(1 ≤ n ≤ 100, 1 ≤ k ≤ 10,000)
불가능한 경우에는 -1을 출력

*/
bool myfunction (int i,int j) { return (i>j); }

int main() {
	vector<int> value;
	int n, k;
	int count = 0;
	
	cin >> n >> k;
	
	for(int i = 0;i < n; i++){
		int tmp;
		cin >> tmp;
		value.push_back(tmp);
	}
	
	//sort decending
	sort(value.begin(), value.begin()+n, myfunction);
	
	for(int i = 0; i < n; i++){
		if(k%value[i] == 0){
			count += k/value[i]; //몇개썼는지
			k = k%value[i];
			break;
		}
		//더 나은 수가 있다면 어카지. 
	}
	
	//printf("count is %d and remain is %d", count, k);
	if(k == 0) cout << count;
	else cout << -1;
	
	//for(int i = 0; i < n; i++) cout << value[i] << endl;
	
	
	
	
	
	
	
	return 0;
}









