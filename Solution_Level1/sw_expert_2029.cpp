// 2029 : 몫과 나머지 출력하기
// 2개의 a,b를 입력 받아 a를 b로 나눴을 때 몫과 나머지 출력
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