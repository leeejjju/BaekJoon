#include <iostream>
using namespace std;
/*KOI ���� �ΰ����� ������ ���챸�̰� ������ �ð��� �� ������ ����Ѵ�. 
���� �ո鿡�� �丮�� ������ �ð��� �˷� �ִ� ������ �ð谡 �ִ�. 
�����������̸� �����ϴ� �ð��� �ʿ��� �ð��� �д����� �־����� ��, 
���챸�̰� ������ �ð��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ��� ���� �ð��� ���´�. ���� �ð��� �� A (0 �� A �� 23) �� �� B (0 �� B �� 59)�� ������ ��ĭ�� ���̿� �ΰ� ������� �־�����. 
�� ��° �ٿ��� �丮�ϴ� �� �ʿ��� �ð� C (0 �� C �� 1,000)�� �� ������ �־�����. 

���
ù° �ٿ� ����Ǵ� �ð��� �ÿ� ���� ������ ���̿� �ΰ� ����Ѵ�. (��, �ô� 0���� 23������ ����, ���� 0���� 59������ �����̴�. 
������ �ð�� 23�� 59�п��� 1���� ������ 0�� 0���� �ȴ�.)
*/
class CookTimer{
    public:
    int startHour, startMinute;
    int cookTime;
    int endHour, endMinute;

    void calcEndTime(){
        endHour = startHour + cookTime/60;
        endMinute = startMinute + cookTime%60;
        if(endMinute > 59){
            endMinute -= 60;
            endHour += 1;
        } 
        if(endHour > 23) endHour = endHour % 24 ;
        //printf("%d : %d ����\n%d : %d�� �ҿ��\n%d : %d ���� ����\n", startHour, startMinute, cookTime/60, cookTime%60, endHour, endMinute);
    }

    void setDish(int h, int m, int t){
        startHour = h;
        startMinute = m;
        cookTime = t;
    }

};


int main(){

    int hour, minute, time; //�ʱ⼳���� �ð�, ��, �丮�ð� 

    //�Է¹ޱ� 
    //cout << "���� �ð��� �ҿ�ð��� �Է��ϼ���.\n";
    cin >> hour >> minute;
    cin >> time;

    //�丮���� ������Ʈ�� ���� ����Ÿ�� �־��ְ�
    CookTimer newDish;
    newDish.setDish(hour, minute, time);

    //������ �ð� ����ϱ�
    newDish.calcEndTime();

    cout << newDish.endHour << " " <<  newDish.endMinute << endl;
    //printf("%d %d", newDish.endHour, newDish.endMinute);

    return 0;

}
