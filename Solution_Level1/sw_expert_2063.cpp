// 2063 : 중간값 찾기
// N개의 숫자 중 크기 순으로 배열 했을 때 중앙에 위치하는 수 (N:홀수)
#include <iostream>
using namespace std;

int main(){
	int num[200] = { 0 };
	int n = 0, tmp = 0;

	scanf("%d", &n); //총 숫자의 개수를 입력받는다
	for (int i = 0; i < n; i++) {	//n만큼 반복
		scanf("%d", &num[i]);		//num[i]에 숫자를 입력 받는다
		for (int j = 0; j < i; j++) {	// 0부터 i만큼 반복
			if (num[i] < num[j]) {		// num[i] 이전 숫자가 num[i]보다 클 경우
				tmp = num[i];			// num[i] 임시 저장
				num[i] = num[j];		// num[i]위치로 num[j] 이동
				num[j] = tmp;			// num[j]위치로 num[i] 이동
										// num[i]<->num[j]
			}
		}
	}

	printf("%d", num[(n - 1) / 2]);		//정렬 후 중간 index의 값 출력
	
	return 0;
}