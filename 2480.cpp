#include <iostream>
using namespace std;
//백준 2480
/*
1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다. 

같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.

예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3×100으로 계산되어 1,300원을 받게 된다. 
3개의 눈이 2, 2, 2로 주어지면 10,000+2×1,000 으로 계산되어 12,000원을 받게 된다. 
3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.

3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.
*/

int calcPrize(int n1, int n2, int n3); //세 숫자를 받아 적절한 상금을 계산해 반환하는 함수
int whatsTheSame(int n1, int n2, int n3, int* t); //몇개의 숫자가 같은지 갯수를 반환하고 케이스별 특수히 다루어지는 숫자를 this에 저장.
int findMax(int n1, int n2, int n3); //입력받은 세개의 숫자 중 가장 큰 것을 반환 

int main(){

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout << calcPrize(num1, num2, num3);



    return 0;
}

//세 숫자를 받아 적절한 상금을 계산해 반환하는 함수
int calcPrize(int n1, int n2, int n3){

    int thisNum;
    switch (whatsTheSame(n1, n2, n3, &thisNum)){
        case 3 :
            return 10000+(thisNum*1000);
            break;

        case 2 :
            return 1000+(thisNum*100);
            break;

        case 1 :
            return 100*thisNum;
            break;

        default:
            break;
    }

}

//몇개의 숫자가 같은지 갯수를 반환하고 케이스별 특수히 다루어지는 숫자를 포인터를 사용해 외부의 t에 저장.
int whatsTheSame(int n1, int n2, int n3, int* t){
    if(n1 == n2){
        *t = n1;
        if(n2 == n3) return 3; //세 수가 모두 같음
        else return 2; //n1, n2 두 수만 같음
    }else if(n2 == n3){ //n2, n3 두 수만 같음
        *t = n2;
        return 2;
    }else if(n1 == n3){ //n1, n3 두 수만 같음
        *t = n1;
        return 2;
    }else{
        *t = findMax(n1, n2, n3); //모든 수가 다름 
        return 1;
    }

}

//입력받은 세개의 숫자 중 가장 큰 것을 반환 
int findMax(int n1, int n2, int n3){
    if(n1 > n2) return ((n1 > n3)? n1 : n3); //1-2-3, 3-1-2 1-3-2, 3-1-2일때 
    else return ((n2 > n3)? n2 : n3); //나머지
}