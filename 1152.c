#include <stdio.h>
#include <string.h>
/*

영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 
이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 
단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

입력
첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 
이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 공백 한 개로 구분되며, 
공백이 연속해서 나오는 경우는 없다. 또한 문자열은 공백으로 시작하거나 끝날 수 있다.

출력
첫째 줄에 단어의 개수를 출력한다.
*/

int main(void){
	
 	char input[1000005];
 	int count = 0;
 	int i;
 	
 	gets(input); //이후로 입력하는 문자열이 배열에 엔터까지 입력됨 
 	
 	for(i = 0; i < strlen(input); i++){ //문자열 길이만큼 for문 반복  
 		
 		if(input[i] == ' '){ //공백(띄어쓰기, 단어 갯수의 기준) 만나면 count 증가 
			if((i != 0 ) && (i != (strlen(input)-1))){ //공백으로 시작되거나 끝나는 경우 제외  
		 		count ++;
		 	}
		 }
	 } 
	 
	 if(strlen(input) == 1 && input[0] == ' '){
	 	printf("0");
	 }else{
	 	printf("%d", count + 1); 
	 }
	
 	
	return 0;
}
