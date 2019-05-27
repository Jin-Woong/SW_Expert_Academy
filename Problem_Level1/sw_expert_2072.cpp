/* 2072 : 10개 숫자 중 홀수만 더해서 출력 */
#include <iostream>
using namespace std;

int main() {
	int tc = 0;	//Test Case
	int num = 0, sum = 0;

	scanf("%d", &tc); //input Test Case

	for (int t = 0; t < tc; t++) {	//repeat as much as Test Case
		sum = 0;	//initialize sum

		for (int i = 0; i < 10; i++) {
			scanf("%d", &num);	//input num
			if (num % 2 == 1) {	// if remainder is 1
				sum += num;
			}
		}

		printf("#%d %d\n", t + 1, sum);
	}
}
