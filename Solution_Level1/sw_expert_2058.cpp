// 2058 : �ڸ��� ���ϱ�
// �ڿ��� N�� �� �ڸ����� �� ���ϱ�
#include <iostream>
using namespace std;

int main() {
	char num[5] = {'0','0','0','0' };
	int sum = 0;

	scanf("%s", num);

	for (int i = 0; i < 4; i++) {
		if (num[i] == NULL) {
			break;
		}
		sum += num[i] - 48;	//ASCII�ڵ�� ���Ǿ� 0�� 48, 1�� 49... ���� ���� ȯ��
	}
	printf("%d", sum);
	return 0;
}