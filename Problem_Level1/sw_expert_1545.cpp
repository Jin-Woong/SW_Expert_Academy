// 1545 : 거꾸로 출력해 보아요
// 입력된 숫자부터 0까지 순서대로 출력
// ex) 3 -> 3 2 1 0

#include <iostream>
using namespace std;

int main() {
	int n=0;

	scanf("%d", &n);
	while (n >= 0) {
		printf("%d ", n);
		n--;
	}

	return 0;
}