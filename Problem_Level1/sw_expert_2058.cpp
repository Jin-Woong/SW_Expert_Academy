// 2058 : 자릿수 더하기
// 자연수 N의 각 자릿수의 합 구하기
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
		sum += num[i] - 48;	//ASCII코드로 계산되어 0은 48, 1은 49... 등의 수로 환됨
	}
	printf("%d", sum);
	return 0;
}