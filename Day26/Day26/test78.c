#include <Windows.h>
#include <stdio.h>

//���� 3) �������� ���� ���
//���� 3) ����(317��)

//���� 4) �������� ��� ���
//���� 4) ���(63.4��)

//���� 5) �հݻ�(���� 75���̻�)�� �й��� ���� ���
//���� 5) 1002�й�(100��), 1005�й�(81��)

//���� 6) 1�� �л��� �й��� ���� ���
//���� 6) 1002�й�(100��)

//���� 7) �й��� �Է¹޾� ���� ���
//���� 8) ������ �Է¹޾� �й� ���

//���� 9) �й��� �Է¹޾� �л�����(�й��� ����) ����
//���� 9) ���� �й� �Է� ��, ����ó��

//���� 10) ���������� �������� ����


struct Student {
	int hakbun[5];
	int score[5];
};


void main() {
	// ���� 1) 1~100 ������ ���� ���� 5�� ����
	// ���� 1)[60, 100, 73, 3, 81]

	struct Student s;
	s.hakbun[0] = 1001; s.hakbun[1] = 1002; s.hakbun[2] = 1003; 
	s.hakbun[3] = 1004; s.hakbun[4] = 1005;

	s.score[0] = 60; s.score[1] = 100; s.score[2] = 73;
	s.score[3] = 3; s.score[4] = 81;


	//���� 2) �������� ���� ���

	for (int i = 0; i < 5; i++) {
		printf("�й� : %d ���� : %d", s.hakbun[i], s.score[i]);
		printf("\n");
	}
}