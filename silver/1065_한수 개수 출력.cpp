#include <stdio.h>

int check(int a) {
	int cnt=0,c1,c2;
	for (int i = 1; i < a+1; i++) {
		if (i >= 100) {
			c1 = i / 100 - (i-(i/100)*100)/10;
			c2 = (i - (i / 100) * 100) / 10 - (i - (i / 100) * 100) % 10;
			if (c1 != c2) {
				cnt += 1;
			}
		}
		else if (i == 1000) {
			cnt += 1;
		}
	}
	return cnt;
}

int main(void) {
	int n,c;
	scanf("%d", &n);

	c = check(n);
	printf("%d",n-c);
}