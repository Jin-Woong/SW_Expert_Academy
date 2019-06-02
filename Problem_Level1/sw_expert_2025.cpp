// 2025 : N줄 덧셈
// 1부터 입력된 숫자만큼 모두 더한 값을 출력
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
