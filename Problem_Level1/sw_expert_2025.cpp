// 2025 : N�� ����
// 1���� �Էµ� ���ڸ�ŭ ��� ���� ���� ���
// ex) 5 -> 1+2+3+4+5 = 15
#include <iostream>
using namespace std;

int main() {
	int num = 0, sum = 0;
	
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	printf("%d", sum);

	return 0;
}
