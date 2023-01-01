#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//1764
/*
듣도 못한 사람의 수 N, 보도 못한 사람의 수 M(N, M은 500,000 이하의 자연수)
각 사람의 이름은 20자 이내 띄어쓰기 없는 알파벳 소문자로 구성됨. 각 명단에는 중복이 없음.
듣보잡의 수와 그 명단을 사전순으로 출력하라. 
*/

vector<string> D, B, DBJ;
string tmp;
int n, m;

//두 배열에서 중복을 찾고 사전순 정렬해서 출력하는 문제.
//중복 어케찾는댓지... 일단 둘다 받은 후 사전순 정렬하고,
//한놈씩 비교해서 더 작은놈을 나가리시켜가며 비교... 겹치는거 발견하면 새로운 벡터에 넣고.  
int main(void){

    //get the data
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        D.push_back(tmp);
    }
    for(int i = 0; i < m; i++){
        cin >> tmp;
        B.push_back(tmp);
    }
    //sort
    sort(D.begin(), D.end());
    sort(B.begin(), B.end());

    //for(int i = 0; i < m; i++)cout << B[i] << " ";
    //cout << "num of D is " << D.size() << " and num of B is " << B.size() << "\n";

    //list validation
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        //cout <<  D[i] << " and " << B[j] << "\n";
        if(D[i] == B[j]){ //save it if equals
            //printf("Both are equals!\n");
            DBJ.push_back(B[j]);
            i++;j++;
        }else{ //else, pass the earlier one.
            //printf("Both are not equals.\n");
            (D[i] > B[j])? j++ : i++;
        }
    }
    //sort again
    sort(DBJ.begin(), DBJ.end());

    //print the result
    cout << DBJ.size();
    for(int i = 0; i < DBJ.size(); i++){
        cout << "\n" << DBJ[i];
    }

}