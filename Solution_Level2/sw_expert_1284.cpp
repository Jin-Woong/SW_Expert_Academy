// 1284 : 수도 요금 경쟁
// A : 1리터당 P원
// B : 기본요금 Q원, R리터 이상 1리터당 S원 추가
// 한달 간 W 리터 사용했을 때  A, B 중 더 저렴한 요금 출력

#include <iostream>
using namespace std;

int main() {
	int tc = 0;
	int p = 0, q = 0, r = 0, s = 0, w = 0;
	int a = 0, b = 0;
	int cost = 0;

	scanf("%d", &tc);

	for (int t = 0; t < tc; t++) {
		scanf("%d %d %d %d %d", &p, &q, &r, &s, &w);

		// A, B 요금 계산
		a = p * w;
		if (w <= r) {
			b = q;
		}
		else {
			b = q + (w - r)*s;
		}

		// A, B 요금비교
		if (a < b) {
			cost = a;
		}
		else {
			cost = b;
		}

		printf("#%d %d\n", t + 1, cost);
	}
	return 0;
}