// 1284 : ���� ��� ����
// A : 1���ʹ� P��
// B : �⺻��� Q��, R���� �̻� 1���ʹ� S�� �߰�
// �Ѵ� �� W ���� ������� ��  A, B �� �� ������ ��� ���

#include <iostream>
using namespace std;

int main() {
	int tc = 0;
	int p = 0, q = 0, r = 0, s = 0, w = 0;
	int a = 0, b = 0;
	int cost = 0;

	scanf("%d", &tc);

	for (int t = 0; t < tc; t++) {
		scanf("%d %d %d %d %d", &p, &q, &r, &s, &w);

		// A, B ��� ���
		a = p * w;
		if (w <= r) {
			b = q;
		}
		else {
			b = q + (w - r)*s;
		}

		// A, B ��ݺ�
		if (a < b) {
			cost = a;
		}
		else {
			cost = b;
		}

		printf("#%d %d\n", t + 1, cost);
	}
	return 0;
}