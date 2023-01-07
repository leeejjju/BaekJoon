#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//1316
/*
단어의 개수 N(100이하의 자연수), 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다
그룹 단어의 개수를 출력하라.
*/
int n;
vector<string> word;
vector<char> key;
/*
한번 연속해서 나왔던 애들을 리스트에 넣고 리스트에 있는놈이 다시 나오면 아웃시키는 방식으로...
*/
int main(void){
    int count = 0;
    cin >> n;
    string tmp;
    for(int i = 0 ;i < n; i++){
        cin >> tmp;
        word.push_back(tmp);
    }

    vector<char>::iterator p;
    char past;
    //요게 케이스들 루프
    for(int i = 0 ;i < n; i++){
        bool flag = true;
        tmp = word.at(i);
        //요게 한 단어 루프
        for(int j = 0; j < tmp.size(); j++){
            //cout << "about " << tmp[j] << " in " << tmp << "...\n";
            if(past != tmp[j]){ //연속되면 넘어가게... 
                p = find(key.begin(), key.end(), tmp[j]);
                if(p != key.end()){ //연속되지 않으면서 나왔던거 또나오면 나가리
                    flag = false;
                    break;
                }else{
                    key.push_back(tmp[j]);//첨보는거 나오면 키노트에 등록
                }
            }
            past = tmp[j];
        }
        if(flag) count++;
        key.clear();
        past = 'A';
    }
    cout << count;
}