// 1938 : 아주 간단한 계산기
// 자연수 a, b를 입력받아 +,-,*,/ 순서로 사칙연산하여 출력
#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;

	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);

	return 0;
}