/* 2070 : 2���� ���� ũ�⸦ ���Ͽ� ��ȣ, �ε�ȣ ���*/
#include <iostream>
using namespace std;

int main() {
	int tc = 0;
	int num1 = 0, num2 = 0;

	scanf("%d", &tc);

	for (int t = 0; t < tc; t++) {
		scanf("%d %d", &num1, &num2);
		printf("#%d ", t + 1);
		if (num1 > num2) {
			printf(">");
		}
		else if (num1 < num2) {
			printf("<");
		}
		else {
			printf("=");
		}
		printf("\n");
	}

	return 0;
}