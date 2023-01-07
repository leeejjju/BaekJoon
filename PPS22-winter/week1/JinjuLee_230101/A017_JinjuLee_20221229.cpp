#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//1475
/*
방 번호를 숫자로 붙이고자 한다. 숫자 세트 하나에는 0-9의 숫자가 하나씩 들어있다. (9와 6은 혼용 가능)
방 번호 N(1,000,000이하의 자연수)를 입력받고 필요한 숫자 세트의 개수를 출력하라.
*/
string n;
vector<int> have;
int numOfSet = 0;
/*
입력받은 숫자...를 자릿수별로 끊어 생각해야 할 것 같은데, string으로 받아서 한글자씩 끊어도 되고 10,100 등으로 나눈 몫을 취해도 되고.
근데 string하는게 더 간단할듯 자릿수가 몇갠지 모르니께. 무작정 다 나누기엔 0도 유의미한 값이라 곤란하고.
그럼 string으로 받아서 한글자씩 보는데, vector를 써보까. 세트갯수를 늘릴때 vector에 0-9를 넣고, 
사용할 때 해당 숫자를 pop하는거임. 이때 6이랑 9 혼용은 if문으로 처리해주고. 
뭔가 이터레이터 써야하고 비효율적인 것 같기도 하지만 일단 가보자고
*/

//세트 하나를 사는거임
void addOneSet(){
    for(int i = 0; i < 10; i++){
        have.push_back(i);
    }
    sort(have.begin(), have.end());

    // cout << "bought one more. now you have ";
    // for(int i = 0; i < have.size(); i++) cout << have.at(i) << ", ";
    // cout << "\n";


    numOfSet++;
}

int main(void){

    cin >> n;
    have.clear();
    addOneSet();
    vector<int>::iterator p;

    for(int i = 0; i < n.size(); i++){
        int num = n[i] -48;
        //cout << "checking about " << num << "\n";
        p = find(have.begin(), have.end(), num);
        /**/
        if(p != have.end()){ //if found, use it
            //cout << "found number is " << have.at(p-have.begin()) << ". \n";
            have.erase(p);
        }else{
            //if not, try to check 6-9 case
            if(num == 6){
                p = find(have.begin(), have.end(), 9);
            }else if(num == 9){
                p = find(have.begin(), have.end(), 6);
            }
            //and see if found again
            if(p != have.end()){
                //cout << "found number is " << have.at(p-have.begin()) << ". \n";
                have.erase(p);
            }else{
                //if still can not found, buy one more set and do again. 
                //cout << "cannot found\n";
                addOneSet();
                i--;
            }
        }
    }

    // cout << "remain number is ";
    // for(int i = 0; i < have.size(); i++) cout << have.at(i) << ", ";
    // cout << "\n";

    cout << numOfSet;


}