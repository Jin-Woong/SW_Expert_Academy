// 2029 : ��� ������ ����ϱ�
// 2���� a,b�� �Է� �޾� a�� b�� ������ �� ��� ������ ���
#include <iostream>
using namespace std;

int main() {
	int tc = 0;
	int a = 0, b = 0;

	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		scanf("%d %d", &a, &b);
		printf("#%d %d %d\n", t + 1, a / b, a%b);
	}
	return 0;
}