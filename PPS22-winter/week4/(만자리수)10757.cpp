#include <iostream>
#include <string.h>
using namespace std;
#define ll long long int
#define MAX 1000000000000000000

//10757
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//(0 < A,B < 10^10000)

//ull max: 18446744073709551615

struct BigInteger{
  ll upper; //위 18자리
  ll lower; //아래 18자리
}a, b, ans;

BigInteger add(BigInteger a, BigInteger b){
  BigInteger rst;
  int toUpper = 0;

  //아랫자리 연산
  rst.lower = a.lower + b.lower;
  if(rst.lower >= MAX){ //18자리 넘어가면 처리
    toUpper = rst.lower / MAX;
    rst.lower -= MAX*toUpper;
  }//근데 if문이 필요한가? 자릿수 안 넘어가면 짜피 toUpper도 0일텐데... 

  //윗자리 연산
  rst.upper = a.upper + b.upper + toUpper;

  return rst;

}


int main() {
  char A[256], B[256];
  scanf("%s %s", A, B);

  //BigInt로 각각의 수 옮겨담기
  //18자리 잘라서 lower로, 나머지는 upper로...
  //18자리 어케자르냐면... 0부터 길이만큼 받았을거아님. 길이-18하면 거기가 lower의 시작점
  int cut = strlen(A)-18;
  //cut~len까지가 lower, 0~cut-1까지가 upper
  a.lower = atoll(&A[cut]);
  A[cut] = '\0'; //잘라주기 
  a.upper = atoll(A);
  //B도 동일하게 
  cut = strlen(B)-18;
  b.lower = atoll(&B[cut]);
  B[cut] = '\0';
  b.upper = atoll(B);

  ans = add(a, b);
  printf("%lld + %lld\n%lld + %lld\n%lld + %lld\n", a.upper, a.lower, b.upper, b.lower, ans.upper, ans.lower);

  printf("%lld%lld", ans.upper, ans.lower);

}
