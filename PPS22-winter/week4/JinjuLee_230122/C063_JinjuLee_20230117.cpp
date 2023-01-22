//1920 C063 수 찾기
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

/*N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 
이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.
N(1 ≤ N ≤ 100,000), M(1 ≤ M ≤ 100,000)
*/

int n, m;
vector<int> A, B;

int bs(int size, int num){
    int left = 0, right = size-1;
    int pivot;
    //cout << "start binary search about " << num << endl;

    while(left <= right){
        pivot = (left+right)/2;
        //cout << "now checking in range " << left << " ~ " << right << endl;

        if(A[pivot] == num) return 1; //찾으면 1 리턴
        else if(A[pivot] > num) { //찾는애가 더 작아
            right = pivot - 1;
        }else{
            left = pivot + 1;
        }
    }

    return 0;
}


int main(void){

    //cin >> n;
    scanf("%d", &n);
    A.resize(n+1);
    for(int i = 0; i < n; i++){
        //cin >> A[i];
        scanf("%d", &A[i]);
    }

    //cin >> m;
    scanf("%d", &m);
    B.resize(m+1);
    for(int i = 0; i < m; i++){
        //cin >> B[i];
        scanf("%d", &B[i]);
    }

    sort(A.begin(), A.begin()+n);

    for(int i = 0; i < m; i++){
        //cout << bs(n, B[i]) << "\n";
        printf("%d\n", bs(n, B[i]));
        
    }



}
