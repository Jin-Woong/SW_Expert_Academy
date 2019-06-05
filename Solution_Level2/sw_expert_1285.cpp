// 1285 : 아름이의 돌 던지기
// N 명의 사람이 돌을 던졌을 때,
// 0에 가장 가까운 거리의 위치, 거리차, 같은 거리차가 몇 명인지 출력
// 돌은 0부터 +-100,000까지, 사람은 1부터 1,000까지

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
	int tc = 0;	//테스트 케이스
	int n = 0;	//사람 수
	int stone[1001] = { 0 }; //돌의 위치
	int min = 0;	//거리차
	int count = 0;	//같은 거리차 사람 수

	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		int min = 100000;
		count = 0;

		scanf("%d", &n);

		//돌의 최소거리 구하기
		for (int i = 0; i < n; i++) {
			scanf("%d", &stone[i]);
			if (min > abs(stone[i])) {
				min = abs(stone[i]);
			}
		}

		//최소거리에 던진 사람 수 구하기
		for (int i = 0; i < n; i++) {
			if (abs(stone[i]) == min) {
				count++;
			}
		}
		
		printf("#%d %d %d\n", t + 1, min, count);
	}
	return 0;
}
