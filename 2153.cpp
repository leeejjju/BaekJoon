#include <iostream>
using namespace std;

/*
편의상 1도 소수로 하자
a를 1로, b를 2로, …, z를 26으로, A를 27로, …, Z를 52로 하여 그 합을 구한다
수가 소수인 경우, 그 단어를 소수 단어라고 한다. 단어가 주어졌을 때, 그 단어가 
소수 단어인지 판별하는 프로그램을 작성하시오.

*/

int main(void){

    //65-90 대문자
    //97-122 소문자
    string S;
    int sum = 0;
    cin >> S; 
    
    for(int i = 0; i < S.length(); i++){
        if(S[i] < 'a') sum += (S[i]-65+27); //대문자
        else sum += (S[i]-97+1); //소문자
    }
    bool flag = true;

    for(int i = 1; i < sum; i++){
        if(i%sum == 0){
            flag = false;
            break;
        }
    }

    cout << S.length() << " : " << sum << " : " << S << endl;

    if(flag) cout << "It is a prime word.";
    else cout << "It is not a prime word.";


    return 0;
}