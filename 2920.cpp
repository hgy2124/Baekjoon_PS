#include <stdio.h>

//ó������ flag�� ����� ���·� ®�µ� �׷��� �Ǹ� ������ ���� descending���̴��� 
// descending�� ������ ��. �׷��� p��� ������ ���.

int main() {
	int n,p = 0;

	for (int i = 1; i < 9; i++) {
		scanf("%d", &n);
		if (n == i) {
			p += 1;
		}
		else if (n == 9 - i) {
			p-=1;
		}
	}

	if (p == 8) {
		printf("ascending");
	}
	else if (p == -8) {
		printf("descending");
	}
	else{
		printf("mixed");
	}
}