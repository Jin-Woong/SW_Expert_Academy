// 1936 : 1��1 ����������
// A, B�� ������������ ���ڷ� �Է¹޾� �̱� ��� ���
// ���� : 1, ���� : 2, �� : 3
#include <iostream>
using namespace std;

int main() { 
	int a = 0, b = 0;
	char result = NULL;

	scanf("%d %d", &a, &b);
	if (a == 1) {		//����
		if (b == 2) {//����
			result = 'B';
		}
		else {	//��
			result = 'A';
		}
	}
	else if (a == 2) {	//����
		if (b == 1) {//����
			result = 'A';
		}
		else {	//��
			result = 'B';
		}
	}
	else { // a==3 ��
		if (b == 1) {//����
			result = 'B';
		}
		else {//����
			result = 'A';
		}
	}
	printf("%c", result);

	return 0;
}