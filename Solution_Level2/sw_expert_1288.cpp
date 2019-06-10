// 1288 : 새로운 불면증 치료법
// N을 입력받아 N의 배수의 각 숫자를 확인할 때
// 0부터 9까지 모든 숫자를 보려면 몇 번을 세야하는지 출력

// ex) N = 1295	 => 1,2,5,9
// ex) 2N = 2590 => 0,2,5,9
// ex) 3N = 3885 => 3,5,8
// ex) 4N = 5180 => 0,1,5,8
// ex) 5N = 6475 => 6,4,7,5
// 5번까지 세면 0부터 9까지 한번씩 볼 수 있다!

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int tc = 0;
	int count = 0;
	int n = 0;
	char nn[7] = { NULL };
	bool num[10] = { false };
	bool check = false;
	
	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {

		memset(nn, NULL, sizeof(nn));
		memset(num, false, sizeof(num));
		count = 0;
		check = true;
		
		scanf("%d", &n);
		

		while (1) {
			count++;	//반복횟수
			check = true;

			memset(nn, NULL, sizeof(nn));
			//정수를 문자열로 변환해 nn배열에 저장
			sprintf(nn, "%d", n*count); 

			//0~9의 숫자를 보면 true 변경
			for (int i = 0; i < 7; i++) {
				if (nn[i] == NULL) {	//배열의 끝
					break;
				}
				else {
					//printf("숫자 %d", nn[i]-'0');
					num[nn[i]-'0'] = true;
				}
			}
			

			//0~9가 전부 나왔었는지 확인
			for (int i = 0; i < 10; i++) {
				if (num[i] == false) {	//0~9중 하나라도 못본 경우
					check = false;
					break;
				}
			}

			if (check == true) { 
				break;
			}
		}
		printf("#%d %d\n", t + 1, n*count);
	}


	return 0;
}