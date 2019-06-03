// 2056 : 연월일 달력
// 연월일으로 구성된 8자리 날짜의 유효 여부 판단
// 유효하지 않을 경우 -1, 유효할 경우 YYYY/MM/DD 형식으로 출력
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

		month = (date[4] - '0') * 10 + (date[5] - '0');	//월을 정수로 변환

		if (month > 12 || month < 1) {	// 월이 1~12을 벗어난 경우
			result = "-1";
		}
		else {
			for (int i = 0; i < 7; i++) {
				if (month == d31[i]) {	//31일까지인 달에 해당하는지
					max_day = 31;
				}
			}
			for (int i = 0; i < 4; i++) {
				if (month == d30[i]) {	//30일까지인 달에 해당하는지
					max_day = 30;
				}
			}
			if (month == d28) {		//28일까지인 달에 해당하는지
				max_day = 28;
			}

			day = (date[6] - '0') * 10 + (date[7] - '0'); //일을 정수로 변환
			if (day > max_day || day < 1) {	// 일이 0이거나 달의 최대일을 넘어간 경우
				result = "-1";
			}
			else {
				//유효 날짜인 경우 제시한 출력 포맷에 맞추어 변환
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