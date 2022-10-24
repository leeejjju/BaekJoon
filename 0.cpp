#include <iostream>
using namespace std;


int main(){
     //printf("hello world!"); 
     int a = 10;
     scanf("%d", &a);
     goto here;
     printf("%d!!!!", a);

     here:
     printf("%d~~~~", a);


      return 0;
      

}