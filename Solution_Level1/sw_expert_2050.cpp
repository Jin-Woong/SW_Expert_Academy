// 2050 : 알파벳을 숫자로 변환
// 알파벳 대문자로 이루어진 문자열을 입력받아 1~26 숫자로 변환

#include <iostream>
using namespace std;

int main() {
	char alpha[200];

	scanf("%s", alpha);
	
	for (int i = 0; i < 200; i++) {
		if (alpha[i] == NULL) {
			break;
		}
		printf("%d ", alpha[i] - 'A' + 1);
	}

	return 0;
}