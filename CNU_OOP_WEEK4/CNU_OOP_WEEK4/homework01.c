#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // input, output �Լ��� ȣ���ϱ� ���� ����

int main() {

	char s[101]; //100�� �̳� ���������� �迭 ũ�� ����.

	printf("���ڸ� �Է��ϼ���(100�� �̳�).\n"); // ���۹� ���
	scanf("%[^\n]", s); //scanf �Լ��� ���� �Է�.���� �Է��� ���� %[^\n]���� ����
	printf("�Էµ� ���ڴ� %s �Դϴ�.\n", s); // ����� ���

	system("pause"); // ���â Ȯ���� ���� pause
	return 0;
}