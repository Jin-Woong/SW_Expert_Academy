// 1288 : ���ο� �Ҹ��� ġ���
// N�� �Է¹޾� N�� ����� �� ���ڸ� Ȯ���� ��
// 0���� 9���� ��� ���ڸ� ������ �� ���� �����ϴ��� ���

// ex) N = 1295	 => 1,2,5,9
// ex) 2N = 2590 => 0,2,5,9
// ex) 3N = 3885 => 3,5,8
// ex) 4N = 5180 => 0,1,5,8
// ex) 5N = 6475 => 6,4,7,5
// 5������ ���� 0���� 9���� �ѹ��� �� �� �ִ�!

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
			count++;	//�ݺ�Ƚ��
			check = true;

			memset(nn, NULL, sizeof(nn));
			//������ ���ڿ��� ��ȯ�� nn�迭�� ����
			sprintf(nn, "%d", n*count); 

			//0~9�� ���ڸ� ���� true ����
			for (int i = 0; i < 7; i++) {
				if (nn[i] == NULL) {	//�迭�� ��
					break;
				}
				else {
					//printf("���� %d", nn[i]-'0');
					num[nn[i]-'0'] = true;
				}
			}
			

			//0~9�� ���� ���Ծ����� Ȯ��
			for (int i = 0; i < 10; i++) {
				if (num[i] == false) {	//0~9�� �ϳ��� ���� ���
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