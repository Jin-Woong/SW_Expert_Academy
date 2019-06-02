// 1933 : 간단한 N의 약수
// 숫자 N을 입력받아 N의 약수를 오름차순으로 출력

#include <iostream>
using namespace std;

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num%i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}