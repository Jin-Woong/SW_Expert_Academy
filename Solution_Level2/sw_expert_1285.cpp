// 1285 : �Ƹ����� �� ������
// N ���� ����� ���� ������ ��,
// 0�� ���� ����� �Ÿ��� ��ġ, �Ÿ���, ���� �Ÿ����� �� ������ ���
// ���� 0���� +-100,000����, ����� 1���� 1,000����

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
	int tc = 0;	//�׽�Ʈ ���̽�
	int n = 0;	//��� ��
	int stone[1001] = { 0 }; //���� ��ġ
	int min = 0;	//�Ÿ���
	int count = 0;	//���� �Ÿ��� ��� ��

	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		int min = 100000;
		count = 0;

		scanf("%d", &n);

		//���� �ּҰŸ� ���ϱ�
		for (int i = 0; i < n; i++) {
			scanf("%d", &stone[i]);
			if (min > abs(stone[i])) {
				min = abs(stone[i]);
			}
		}

		//�ּҰŸ��� ���� ��� �� ���ϱ�
		for (int i = 0; i < n; i++) {
			if (abs(stone[i]) == min) {
				count++;
			}
		}
		
		printf("#%d %d %d\n", t + 1, min, count);
	}
	return 0;
}
