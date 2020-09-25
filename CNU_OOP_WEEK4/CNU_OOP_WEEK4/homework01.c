#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // input, output 함수를 호출하기 위해 선언

int main() {

	char s[101]; //100자 이내 생성을위해 배열 크기 지정.

	printf("문자를 입력하세요(100자 이내).\n"); // 시작문 출력
	scanf("%[^\n]", s); //scanf 함수를 통한 입력.띄어쓰기 입력을 위해 %[^\n]으로 선언
	printf("입력된 문자는 %s 입니다.\n", s); // 결과문 출력

	system("pause"); // 결과창 확인을 위한 pause
	return 0;
}