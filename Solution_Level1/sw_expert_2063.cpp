// 2063 : �߰��� ã��
// N���� ���� �� ũ�� ������ �迭 ���� �� �߾ӿ� ��ġ�ϴ� �� (N:Ȧ��)
#include <iostream>
using namespace std;

int main(){
	int num[200] = { 0 };
	int n = 0, tmp = 0;

	scanf("%d", &n); //�� ������ ������ �Է¹޴´�
	for (int i = 0; i < n; i++) {	//n��ŭ �ݺ�
		scanf("%d", &num[i]);		//num[i]�� ���ڸ� �Է� �޴´�
		for (int j = 0; j < i; j++) {	// 0���� i��ŭ �ݺ�
			if (num[i] < num[j]) {		// num[i] ���� ���ڰ� num[i]���� Ŭ ���
				tmp = num[i];			// num[i] �ӽ� ����
				num[i] = num[j];		// num[i]��ġ�� num[j] �̵�
				num[j] = tmp;			// num[j]��ġ�� num[i] �̵�
										// num[i]<->num[j]
			}
		}
	}

	printf("%d", num[(n - 1) / 2]);		//���� �� �߰� index�� �� ���
	
	return 0;
}