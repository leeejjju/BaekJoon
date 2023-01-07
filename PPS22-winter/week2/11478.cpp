#include <iostream>
#include <set>
#include <algorithm>
#include <utility>
#include <cstring>
using namespace std;
//11478
/*
S는 알파벳 소문자로만 이루어져 있고, 길이는 1,000 이하이다.
부분 문자열은 S에서 연속된 일부분을 말하며, 길이가 1보다 크거나 같아야 한다.
ababc의 부분 문자열은 a, b, a, b, c, ab, ba, ab, bc, aba, bab, abc, abab, babc, ababc
*/
string s;
set<string> mySet;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> s;
    int len = s.length();
    //n글자 부분문자열 찾기를 할 수도 있겠고... 근데 시간제한이 좀 걸리네. 1000자정도면 괜찮나
    //아 겹치는거 제외해야함
    //dhd와 셋이 중복제거가 디폴트구나 쩐다... 데구 좀 열심히 들을걸 이걸ㅇ몰랏누 
    for(int i = 1; i <= len; i++){
        //i개의 부분문자열 찾기
        for(int k = 0; k <= len-i; k++){
            string tmp = s.substr (k,i);
            //cout << tmp << endl;
            mySet.insert(tmp);
        }
    }

    cout << mySet.size();


}
