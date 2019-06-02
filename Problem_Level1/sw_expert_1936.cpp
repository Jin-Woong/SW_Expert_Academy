// 1936 : 1대1 가위바위보
// A, B의 가위바위보를 숫자로 입력받아 이긴 사람 출력
// 가위 : 1, 바위 : 2, 보 : 3
#include <iostream>
using namespace std;

int main() { 
	int a = 0, b = 0;
	char result = NULL;

	scanf("%d %d", &a, &b);
	if (a == 1) {		//가위
		if (b == 2) {//바위
			result = 'B';
		}
		else {	//보
			result = 'A';
		}
	}
	else if (a == 2) {	//바위
		if (b == 1) {//가위
			result = 'A';
		}
		else {	//보
			result = 'B';
		}
	}
	else { // a==3 보
		if (b == 1) {//가위
			result = 'B';
		}
		else {//바위
			result = 'A';
		}
	}
	printf("%c", result);

	return 0;
}