#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//11047 B035 동전0

/* N종류의 동전들을 이용해 그 합이 K가 되게 하는 동전 갯수의 최소값을 구하시오 
(1 ≤ N ≤ 10, 1 ≤ K ≤ 100,000,000)
동전의 가치 Ai,  (1 ≤ Ai ≤ 1,000,000, A1 = 1, i ≥ 2인 경우에 Ai는 Ai-1의 배수)*/


//int A[100000000]; ->메모리에러 낫서용 
vector<int> A;

int main(void){
    int N, K, count = 0;
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++){
        //cout << "next, " << i << endl;
        int tmp;
        scanf("%d", &tmp);
        A.push_back(tmp);
    }

    sort(A.begin(), A.begin()+N, greater<>());

    for(int i = 0; i < N; i++){
        if(K >= A[i]){
            //printf("%d* %d substracted. remain is %d\n", A[i], K/A[i], K%A[i]);
            count += K/A[i];
            K = K%A[i];
        }
    }

    cout << count;


    return 0;
}