#include <Windows.h>
#include <stdio.h>

// # 구조체 (사용자정의 자료형 : 기존 자료형을 조합해서 만든다.)
// 1) 정의 ==> 디자인
//      [1] struct : 키워드
//      [2] User   : 구조체 이름(내가만든 자료형이라고생각하면된다)
//      [3] {};    : 내용 (특이하게 ; 으로 마무리한다)

// 2) 선언
//      [1] User user;  // int a; 랑 비슷하다.

// 3) 사용 
//      [1] user.num = 1001;  // . 으로 내부 변수에 접근한다.

struct User {
	int num;
	int score;
};

void main() {
	struct User user = { 0 };
	user.num = 1;
	user.score = 30;
	printf("학번 : %d,\n성적:%d\n", user.num, user.score);

	printf("\n");

	struct User user2 = { 0 };
	user2.num = 2;
	user2.score = 60;
	printf("학번 : %d,\n성적:%d\n", user2.num, user2.score);

}