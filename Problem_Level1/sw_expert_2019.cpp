// 2019 : �������
// 1���� �־��� Ƚ��ŭ 2�� ���� ������ ���
// ex) 4 -> 1 2 4 8

#include <iostream>
using namespace std;

int main() {
	int n=0;
	int result = 1;

	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("%d ", result);
		result *= 2;
	}


	return 0;
}