// 2047 : �Ź� ������
// �־��� ���ڿ����� �ҹ��ڸ� ã�� �빮�ڷ� ��ȯ
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