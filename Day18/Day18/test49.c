#include <stdio.h>
int main() {

	// 문제 1) 아래 배열 a 와 b 를 비교해서 둘의 합이 짝수 일때만 c에 저장 
/*
	int a[5] = { 10, 20, 30, 40, 50 };
	int b[5] = { 13, 54, 17, 42, 1 };
	int c[5] = { 0,0,0,0,0 };
	// 예) c[5] = {74,82,0,0,0}
	int i = 0; int m = 0; int n = 0; int o = 0;

	while (m < 5) {
		i = a[m] + b[m];
		if (i % 2 == 0) {
			c[n] = i;
			n += 1;
		}
		m += 1;
	}
	
	m = 0;
	while (m < 5) {
		printf("[%d] ", c[m]);
		m += 1;
	}

	// 문제2) 아래는 시험결과 이다. 시험에 합격한사람의 번호만 win 에 저장 (60점이상합격)

	int num[3] = { 1001, 1002, 1003 };
	int score[3] = { 50, 83, 78 };
	int win[3] = { 0,0,0 };
	// 예) win[3]= {1002, 1003, 0};
	int p = 0; int q = 0;

	for (int i = 0; i < 3; i++) {
		if (score[i] >= 60) {
			win[p] = num[i];
			p += 1;
		}
	}

	q = 0;
	while (q < 3) {
		printf("[%d] ", win[q]);
		q += 1;
	}
*/

	// 문제3) 아래는 시험결과 이다 시험에 합격한 사람의 번호만 win2 에 저장 (60점이상 합격)
	int data[6] = { 1001, 80 , 1002, 23, 1003, 78 };
	int win2[3] = { 0,0,0 };
	// 예) win2[3] = {1001, 1003, 0};
	int r = 0; int s = 0;

	while (r < 6) {
		if (data[r] <1000 && data[r] >= 60) {
			win2[s] = data[r-1];
			s += 1;
		}
		r += 1;
	}

	s = 0;
	while (s < 3) {
		printf("[%d] ", win2[s]);
		s += 1;
	}
}