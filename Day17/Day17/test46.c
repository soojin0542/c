#include <stdio.h>

int main() {

	int x[5] = { 10, 4, 5, 3, 1 };
/*
	// 문제 1) 위  배열를 이용해서  전체 합출력 ==> int a[5] = { 10, 4, 5, 3, 1 };
	int a = 0;
	int b = 0;
	while (b < 5) {
		a += x[b];
		b += 1;
	}
	printf("%d", a); printf("\n");

	// 문제 2) 다음 리스트를 값을 입력하면 번호 출력 ==> int a[5] = { 10, 4, 5, 3, 1 };
	// 예) 5 ==> 2
	int c = 0;
	printf("출력할 인덱스를 입력하세요.\n");
	scanf_s("%d", &c); printf("\n");

	while (b < 5) {
		printf("%d", x[c]);
		c = 5;
	}

	// 문제 3) 다음 리스트를 이용해서 a 의 값중 홀수만 b 에 저장(위치는 동일한위치에 저장)
	// 예) b = [0, 0, 5, 3, 1]
	int y[5] = { 0, 0, 0, 0, 0 };
	int d = 0;

	for (int i = 0; i < 5; i++) {
		if (x[i] % 2 == 1) {
			y[i] = x[i];
		}
		printf("[%d] ", y[i]);
	}
*/

	// 문제 4) 다음 리스트를 이용해서 a 의 값중 홀수만 c 에 저장(위치는 앞에서 부터  저장)
	// 3번문제와 조금 다름
	// 예) c = [5, 3, 1, 0, 0]
	int z[5] = { 0,0,0,0,0 };
	int e = 0;
	int f = 0;
	
	while (e < 5) {
		if (x[e] % 2 == 1) {
			z[f] = x[e];
			f += 1;
		}
		e += 1;
	}
	e = 0;
	while (e < 5) {
		printf("[%d] ", z[e]);
		e += 1;
	}
	printf("\n");
}