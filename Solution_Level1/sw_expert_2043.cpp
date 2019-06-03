// 2043 : 서랍의 비밀번호
// P, K가 주어지고 K부터 1씩 증가하여 몆 번만에 P에 도달하는지 출력
// ex) 123 100 -> 24
#include <iostream>
using namespace std;

int main() {
	int p = 0, k = 0;
	scanf("%d %d", &p, &k);
	printf("%d", p - k + 1);
	return 0;
}