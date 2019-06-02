// 2019 : 더블더블
// 1부터 주어진 횟만큼 2를 곱한 값들을 출력
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