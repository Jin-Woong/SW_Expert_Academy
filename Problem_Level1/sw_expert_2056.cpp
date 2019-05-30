// 2056 : ������ �޷�
// ���������� ������ 8�ڸ� ��¥�� ��ȿ ���� �Ǵ�
// ��ȿ���� ���� ��� -1, ��ȿ�� ��� YYYY/MM/DD �������� ���
#include <iostream>
#include <string>
using namespace std;

int main() {
	int tc = 0;
	int month = 0;
	int day = 0;
	int max_day = 0;
	char date[9];
	string result;

	int d31[7] = { 1,3,5,7,8,10,12 };
	int d30[4] = { 4,6,9,11 };
	int d28 = 2;

	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		scanf("%s", date);
		result = "";

		month = (date[4] - '0') * 10 + (date[5] - '0');	//���� ������ ��ȯ

		if (month > 12 || month < 1) {	// ���� 1~12�� ��� ���
			result = "-1";
		}
		else {
			for (int i = 0; i < 7; i++) {
				if (month == d31[i]) {	//31�ϱ����� �޿� �ش��ϴ���
					max_day = 31;
				}
			}
			for (int i = 0; i < 4; i++) {
				if (month == d30[i]) {	//30�ϱ����� �޿� �ش��ϴ���
					max_day = 30;
				}
			}
			if (month == d28) {		//28�ϱ����� �޿� �ش��ϴ���
				max_day = 28;
			}

			day = (date[6] - '0') * 10 + (date[7] - '0'); //���� ������ ��ȯ
			if (day > max_day || day < 1) {	// ���� 0�̰ų� ���� �ִ����� �Ѿ ���
				result = "-1";
			}
			else {
				//��ȿ ��¥�� ��� ������ ��� ���˿� ���߾� ��ȯ
				for (int i = 0; i < 4; i++) {
					result += date[i];
				}
				result.append("/");
				result += date[4];
				result += date[5];
				result.append("/");
				result += date[6];
				result += date[7];
			}
		}
		
		printf("#%d %s\n", t + 1, result.c_str());
	}
	//scanf("%s", date);

	
	//printf("%s", date);
	return 0;
}