/* 2071 : 10개 숫자의 평균값 출력 */
#include <iostream>
using namespace std;

int main() {
	int tc = 0;				//Test Case
	int num = 0, sum = 0;	//number, sum
	float avg = 0;			//average

	scanf("%d", &tc);	//input TestCase
	for (int t = 0; t < tc; t++) {
		sum = 0;	//sum init
		avg = 0;	//avg init

		for (int i = 0; i < 10; i++) {	// repeat 10 times
			scanf("%d", &num);	//input number
			sum += num;			//sum number
		}
		avg = float(sum) / 10;	//average 10 numbers
		printf("#%d %.f\n", t + 1, avg);	//output Test Case, average
	}
}