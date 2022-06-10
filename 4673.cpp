#include <stdio.h> //셀프넘버를 찾고 flag를 세우는 식을 먼저 했는데 이 경우는 시간초과가 남. 

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