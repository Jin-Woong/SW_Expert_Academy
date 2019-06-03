// 1204 : 최빈수 구하기
// 1000명의 성적 중 최빈수를 출력 (최빈수가 여러 개일 경우 가장 큰 점수)

#include <iostream>
using namespace std;

int main() {
	int tc = 0, n = 0;
	int score[101] = { 0 };
	int tmp = 0;
	int count = 0, max=0;
	scanf("%d", &tc);

	for (int t = 0; t < tc; t++) {
		scanf("%d", &n);

		memset(score, 0, 101);

		for (int i = 0; i < 1000; i++) {
			scanf("%d", &tmp);
			score[tmp]++;
		}

		for (int i = 0; i <= 100; i++) {
			if (count <= score[i]) {
				count = score[i];
				max = i;
			}
		}
		printf("#%d %d\n", n, max);
	}

	return 0;
}
