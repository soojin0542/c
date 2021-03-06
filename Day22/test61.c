#include <Windows.h>
#include <stdio.h>
#include <time.h>

/*
int student(int* p1, int* p2) {
	for (int i = 0; i < 10; i++) {
		int r = rand() % 100 + 1;
		printf("%d\n", r);

		if (r >= 60) {
			p1[0] += 1; // (*p1) += 1;
		}

		if (p2[0] < r) {
			p2[0] = r; // (*p2) += 1;
		}
	}
}

int main() {
	srand(time(NULL));

	// # 학생 10명 정보출력 
	// 문제1) 학생 10명을 랜덤으로 점수를 0~100을 출력한다.
	// 문제2) 합격한 학생 수를 출력(기준은 60점이상) 
	// 문제3) 1등 점수 출력

	int count = 0;
	int max = 0;

	student(&count, &max);

	printf("합격 수 : %d\n", count);
	printf("1등점수 : %d\n", max);
}
*/


int main() {
	srand(time(0));
	// # 학생 10명 정보출력 
	// 문제1) 학생 10명을 랜덤으로 점수를 0~100을 출력한다.
	// 문제2) 합격한 학생 수를 출력(기준은 60점이상) 
	// 문제3) 1등 점수 출력 
	int count = 0;
	int max = 0;

	int* cp = &count;
	int* mp = &max;

	for (int i = 0; i < 10; i++) {
		int r = rand() % 100 + 1;
		printf("%d\n", r);

		if (r >= 60) {
			*cp += 1;
		}

		if (max < r) {
			mp[0] = r;
		}
	}
	printf("\n");
	printf("합격 수 : %d\n", count);
	printf("1등점수 : %d\n", max);
}
