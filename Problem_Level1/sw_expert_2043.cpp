// 2043 : ������ ��й�ȣ
// P, K�� �־����� K���� 1�� �����Ͽ� �p ������ P�� �����ϴ��� ���
// ex) 123 100 -> 24
#include <iostream>
using namespace std;

int main() {
	int p = 0, k = 0;
	scanf("%d %d", &p, &k);
	printf("%d", p - k + 1);
	return 0;
}