// 1933 : ������ N�� ���
// ���� N�� �Է¹޾� N�� ����� ������������ ���

#include <iostream>
using namespace std;

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num%i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}