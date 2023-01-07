#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//4659
/*
모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.

마지막 테스트 케이스는 end이며, 
패스워드는 1<= pw.length() <= 20, 대문자를 포함하지 않는다.
각 테스트 케이스를 '예제 출력'의 형태에 기반하여 품질을 평가하여라.
<a> is acceptable.
<tv> is not acceptable.
*/
vector<string> pws;
char m[5] = {'a', 'e', 'i', 'o', 'u'};

int main(void){
 
    while (1){
        string tmp;
        cin >> tmp;
        if(tmp == "end") break;
        else{
            pws.push_back(tmp);
        }
    }

    for(int i = 0; i < pws.size(); i++){

        bool hasMoum = false, flag = true; //모음포함여부
        int moumStack = 0; //연속모음스택
        int jaumStack = 0; //연속자음스택
        char past = 'A'; //연속글자 검사용 
        string pw = pws[i];
        //cout << "start with " << pw << "\n";

        for(int k = 0; k < pw.length(); k++){
            auto p = find(begin(m), end(m), pw[k]);
            if(p != end(m)){ //모음일 때
                //printf("%c is moum.\n", pw[k]);
                hasMoum = true;
                moumStack++;
                jaumStack = 0;
            }else{ //자음일 때
                //printf("%c is jaum.\n", pw[k]);
                jaumStack++;
                moumStack = 0;
            }

            if(past == pw[k] && past!= 'o' && past != 'e'){
                //cout << "[error] double digit\n";
                flag = false;
                break;
            }

            if(moumStack >= 3 || jaumStack >= 3){
                //cout << "[error] triple digit\n";
                flag = false;
                break;
            }

            past = pw[k];
            
        }

        //if(!hasMoum) cout << "[error] no Moum\n";

        if(flag && hasMoum)cout << "<" << pws.at(i) << "> is acceptable.\n"; 
        else cout << "<" << pws.at(i) << "> is not acceptable.\n";
        //cout << "-----------------------------------------\n";

    }
    

}