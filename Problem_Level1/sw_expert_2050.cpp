// 2050 : ���ĺ��� ���ڷ� ��ȯ
// ���ĺ� �빮�ڷ� �̷���� ���ڿ��� �Է¹޾� 1~26 ���ڷ� ��ȯ

#include <iostream>
using namespace std;

int main() {
	char alpha[200];

	scanf("%s", alpha);
	
	for (int i = 0; i < 200; i++) {
		if (alpha[i] == NULL) {
			break;
		}
		printf("%d ", alpha[i] - 'A' + 1);
	}

	return 0;
}