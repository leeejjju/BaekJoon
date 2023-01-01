#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
//2942
/*
최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.
단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.
주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
*/
string n;
vector<char> vec;
int special = 0;
/*
문자열로 받은걸 char벡터로 나눠담아서 하는거임 
if문 누덕누덕 기워 만드는게 젤 깔끔하지 않으까..? 
c 다음이 =, -, 나머지로 나누고
d다음이 -, z=인지로 나누고
lj, nj, s=, z=... 

좀 더 효율적으로 할 방법도 있나?
=찾으면 앞에거를 볼까. c, dz, s, z
-찾으면 c, d
j찾으면 l, n

특수문자를 발견하면 본인과 그 앞에거를 없애버리고 특수문자 갯수++, 
특수문자갯수랑 남은 문자열 갯수 구하면 될듯? 
*/
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == '='){
            if(i >=2 && (n[i-2] == 'd' && n[i-1] == 'z')){
                vec.pop_back(); //dz=
                vec.pop_back();
                special++;
                continue;
            }else if(n[i-1] == 'c' || n[i-1] == 's' || n[i-1] == 'z'){
                vec.pop_back(); //c=, s=, z=
                special++;
                continue;
            }
        }else if(n[i] == '-'){
            if(n[i-1] == 'c' || n[i-1] == 'd'){
                vec.pop_back(); //c-, d-
                special++;
                continue;
            } 
        }else if(i >= 0 && n[i] == 'j'){
            if(n[i-1] == 'l' || n[i-1] == 'n'){
                vec.pop_back(); //c-, d-
                special++;
                continue;
            } 
        }
        vec.push_back(n[i]);
    }

    //for(int i = 0; i < vec.size(); i++) cout << vec.at(i) << " ";
    //cout << "\ncount of special letter is " << special << ", and total count is " << special + vec.size();
    cout << vec.size() + special;


}