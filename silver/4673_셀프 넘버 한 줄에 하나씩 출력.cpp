#include <stdio.h> //�����ѹ��� ã�� flag�� ����� ���� ���� �ߴµ� �� ���� �ð��ʰ��� ��. 

int n, i=0,s[10000]={0, };

int check(int a) {
	int num=a;
	while (a > 0) {
		num += a% 10;
		a /= 10;
	}
	return num;
}

int main() {

	while (i <= 10000) {
		s[i] = 0;
		i++;
	}

	i = 1;
	while (i <= 10000) {
		n = check(i);
		s[n] = 1;
		i++;
	}
	i = 1;
	while (i <= 10000) {
		if (s[i] == 0) {
			printf("%d\n", i);
		}
		i++;
	}
}