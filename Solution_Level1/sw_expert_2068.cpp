// 2068 : �ִ�� ���ϱ�
// 10���� ���� �� ���� ū �� ���
#include <iostream>
using namespace std;

int main() {
	int tc = 0;
	int num[10] = { 0, };

	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		int max = 0;
		for (int i = 0; i < 10; i++) {
			scanf("%d", &num[i]);
			if (num[i] > max) {
				max = num[i];
			}
		}
		printf("#%d %d\n", t + 1, max);
	}

	return 0;
}