#include <Windows.h>
#include <stdio.h>

void print_menu(int* prices) {
	printf("\n\n=== 롯데리아 ===\n");
	printf("1.[셋트]불고기버거 : %d원\n", prices[0]);
	printf("2.[단품]불고기버거 : %d원\n", prices[1]);
	printf("3.콜라 : %d원\n", prices[2]);
	printf("4.계산하기\n");
}

int sel_menu(int count) {
	int choice = 0;
	printf("메뉴 선택 : ");
	scanf_s("%d", &choice);

	if (4 < choice || choice < 1) {
		choice = -1;
	}
	return choice;
}

void choice1(int* counts) {
	counts[0] += 1;
}

void choice2(int* counts) {
	counts[1] += 1;
}

void choice3(int* counts) {
	counts[2] += 1;
}

int choice4(int* prices, int* counts, int count, int money) {
	int total = prices[0] * counts[0]
		+ prices[1] * counts[1] + prices[2] * counts[2];
	int charge = money - total;
	if (charge >= 0) {
		printf("\n\n=== 영수증 ===\n");
		printf("1.[셋트]불고기버거 : %d개\n", counts[0]);
		printf("2.[단품]불고기버거 : %d개\n", counts[1]);
		printf("3.콜라 : %d개\n", counts[2]);
		printf("총금액 : %d원\n\n", total);
		printf("잔돈은 %d원 입니다.\n", charge);
	}
	else {
		printf("현금이 부족합니다.\n");
	}
	return charge;
}

int run(int* prices, int* counts, int count, int money) {
	while (1) {
		print_menu(prices);
		int choice = sel_menu(count);
		if (choice == -1) {
			printf("입력오류\n");
			continue;
		}
		if (choice == 1) {
			choice1(&counts[0]);
		}
		else if (choice == 2) {
			choice2(&counts[0]);
		}
		else if (choice == 3) {
			choice3(&counts[0]);
		}
		else if (choice == 4) {
			money = choice4(prices, counts, count, money);
			break;
		}
	}
	return money;
}

void main() {

	// # 영수증 출력하기[함수로 변경]

	int count = 3;
	int counts[3] = { 0 };
	int prices[3] = { 8700, 4200, 1500 };

	int money = 20000;

	money = run(&prices[0], &counts[0], count, money);

	system("pause");
}