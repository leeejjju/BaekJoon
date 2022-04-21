#include <iostream>
using namespace std;
/*KOI 전자 인공지능 오븐은 오븐구이가 끝나는 시간을 분 단위로 계산한다. 
오븐 앞면에는 요리가 끝나는 시각을 알려 주는 디지털 시계가 있다. 
훈제오리구이를 시작하는 시각과 필요한 시간이 분단위로 주어졌을 때, 
오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.

입력
첫째 줄에는 현재 시각이 나온다. 현재 시각은 시 A (0 ≤ A ≤ 23) 와 분 B (0 ≤ B ≤ 59)가 정수로 빈칸을 사이에 두고 순서대로 주어진다. 
두 번째 줄에는 요리하는 데 필요한 시간 C (0 ≤ C ≤ 1,000)가 분 단위로 주어진다. 

출력
첫째 줄에 종료되는 시각의 시와 분을 공백을 사이에 두고 출력한다. (단, 시는 0부터 23까지의 정수, 분은 0부터 59까지의 정수이다. 
디지털 시계는 23시 59분에서 1분이 지나면 0시 0분이 된다.)
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
        //printf("%d : %d 시작\n%d : %d분 소요됨\n%d : %d 종료 예정\n", startHour, startMinute, cookTime/60, cookTime%60, endHour, endMinute);
    }

    void setDish(int h, int m, int t){
        startHour = h;
        startMinute = m;
        cookTime = t;
    }

};


int main(){

    int hour, minute, time; //초기설정될 시간, 분, 요리시간 

    //입력받기 
    //cout << "시작 시간과 소요시간을 입력하세요.\n";
    cin >> hour >> minute;
    cin >> time;

    //요리정보 오브젝트에 들어온 데이타를 넣어주고
    CookTimer newDish;
    newDish.setDish(hour, minute, time);

    //끝나는 시간 계산하기
    newDish.calcEndTime();

    cout << newDish.endHour << " " <<  newDish.endMinute << endl;
    //printf("%d %d", newDish.endHour, newDish.endMinute);

    return 0;

}
