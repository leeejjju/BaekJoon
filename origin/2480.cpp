#include <iostream>
using namespace std;
//���� 2480
/*
1�������� 6������ ���� ���� 3���� �ֻ����� ������ ������ ���� ��Ģ�� ���� ����� �޴� ������ �ִ�. 

���� ���� 3���� ������ 10,000��+(���� ��)��1,000���� ���
���� ���� 2���� ������ ��쿡�� 1,000��+(���� ��)��100���� ���
��� �ٸ� ���� ������ ��쿡�� (�� �� ���� ū ��)��100���� ����� �ް� �ȴ�.

���� ���, 3���� �� 3, 3, 6�� �־����� ����� 1,000+3��100���� ���Ǿ� 1,300���� �ް� �ȴ�. 
3���� ���� 2, 2, 2�� �־����� 10,000+2��1,000 ���� ���Ǿ� 12,000���� �ް� �ȴ�. 
3���� ���� 6, 2, 5�� �־����� ���� ���� ū ���� 6�̹Ƿ� 6��100���� ���Ǿ� 600���� ������� �ް� �ȴ�.

3�� �ֻ����� ���� ���� �־��� ��, ����� ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.
*/

int calcPrize(int n1, int n2, int n3); //�� ���ڸ� �޾� ������ ����� ����� ��ȯ�ϴ� �Լ�
int whatsTheSame(int n1, int n2, int n3, int* t); //��� ���ڰ� ������ ������ ��ȯ�ϰ� ���̽��� Ư���� �ٷ������ ���ڸ� this�� ����.
int findMax(int n1, int n2, int n3); //�Է¹��� ������ ���� �� ���� ū ���� ��ȯ 

int main(){

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout << calcPrize(num1, num2, num3);



    return 0;
}

//�� ���ڸ� �޾� ������ ����� ����� ��ȯ�ϴ� �Լ�
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

//��� ���ڰ� ������ ������ ��ȯ�ϰ� ���̽��� Ư���� �ٷ������ ���ڸ� �����͸� ����� �ܺ��� t�� ����.
int whatsTheSame(int n1, int n2, int n3, int* t){
    if(n1 == n2){
        *t = n1;
        if(n2 == n3) return 3; //�� ���� ��� ����
        else return 2; //n1, n2 �� ���� ����
    }else if(n2 == n3){ //n2, n3 �� ���� ����
        *t = n2;
        return 2;
    }else if(n1 == n3){ //n1, n3 �� ���� ����
        *t = n1;
        return 2;
    }else{
        *t = findMax(n1, n2, n3); //��� ���� �ٸ� 
        return 1;
    }

}

//�Է¹��� ������ ���� �� ���� ū ���� ��ȯ 
int findMax(int n1, int n2, int n3){
    if(n1 > n2) return ((n1 > n3)? n1 : n3); //1-2-3, 3-1-2 1-3-2, 3-1-2�϶� 
    else return ((n2 > n3)? n2 : n3); //������
}