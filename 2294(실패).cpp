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

/*
DP? 

*/

bool myfunction (int i,int j) { return (i>j); }
vector<int> value;
int n, k;
int count = 0;
bool flag = true; //true면 갯수, flase면 -1
int DP[10001];


//k를 만들기 위해 필요한 동전의 갯수를 반환하는 함수 
int numOfCoin(int k){
	printf("input is %d\n", k);

	//base condition
	for(int i = 0; i < n; i++){
		if(k == value[i]) return 1;
	}

	if(k < value[n-1]) {
		printf("now k is %d. less than %d. break. \n", k, value[n-1]);
		flag = false;
		return 0;
	}

	//dp and general condition
	if(DP[k] != 0) return DP[k];
	else{
		vector<int> subNums;
		subNums.clear();
		for(int i = 0; i < n; i++){
			subNums.push_back(numOfCoin(k-value[i])+1);
		}
		DP[k] = *min_element (subNums.begin(), subNums.end());
		printf("DP[%d] is %d\n", k, DP[k]);
		return DP[k];
	}
}

int main() {
	
	
	
	cin >> n >> k;
	
	for(int i = 0;i < n; i++){
		int tmp;
		cin >> tmp;
		value.push_back(tmp);
	}
	
	//sort decending
	sort(value.begin(), value.begin()+n, myfunction);
	//cout << *min_element (value.begin(), value.end());
	
	int rst = numOfCoin(k);
	
	if(flag) cout << rst;
	else cout << -1;
	
	//for(int i = 0; i < n; i++) cout << value[i] << endl;
	
	
	
	
	
	
	
	return 0;
}









