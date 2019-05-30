// 2047 : 신문 헤드라인
// 주어진 문자열에서 소문자를 찾아 대문자로 변환
#include <iostream>
using namespace std;

int main() {
	char str[80];
	string st;

	scanf("%s", str);

	for (int i = 0; i < 80; i++) {
		if (str[i] == NULL) {
			break;
		}
		
		//ASCII a=97, z=122, A=65, Z=90
		else if (str[i] > 96 && str[i] < 123) {
			str[i] = str[i] - 32;
		}
		printf("%c", str[i]);

	}

	return 0;
}