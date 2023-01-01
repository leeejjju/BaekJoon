#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
//5397
/*
테스트 케이스의 개수와 각 테스트 케이스가 주어진다. 
테스트 케이스: 입력한 순서대로 길이가 L인 문자열(1 ≤ L ≤ 1,000,000)
알파벳 대문자, 소문자, 숫자, 백스페이스( - ), 화살표(<, >) 로 구성됨
만약 커서의 위치가 줄의 마지막이 아니라면, 커서 및 커서 오른쪽에 있는 모든 문자는 오른쪽으로 한 칸 이동한다.

각 테스트 케이스에 대해서, 강산이의 비밀번호를 출력한다. 비밀번호의 길이는 항상 0보다 크다.
*/
int n;
string tmp;
list<string> keys;
list<char> thisCase;

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        keys.push_back(tmp);
    }

    while (keys.size() > 0){
        
        string key = keys.front(); //keys의 첫번째놈을 여기서 쓸거임... 
        thisCase.clear();
        list<char>::iterator cursor = thisCase.begin();

        //하나씩 검사하면서 커서를 조작해 알맞은 pw로 만듬.
        for(int i = 0; i < key.length(); i++){
            if(key[i] == '>'){
                if(cursor != thisCase.end())cursor++;
            }else if(key[i] == '<'){
                if(cursor != thisCase.begin()) cursor--;
            }else if(key[i] == '-'){
                if(cursor != thisCase.begin()) cursor = thisCase.erase(--cursor);
            }else{
                thisCase.insert(cursor, key[i]);
            }
        }

        for(cursor = thisCase.begin(); cursor != thisCase.end(); cursor++){
            cout << *cursor;
        }
        cout << "\n";
        keys.erase(keys.begin());
    }
    
}