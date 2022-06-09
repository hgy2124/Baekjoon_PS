#include <stdio.h>

int main() {
	int n,c=0;
	for (int i = 0; i<5;i++) {
		scanf("%d", &n);
		c += n*n;
	}
	printf("%d", c % 10);
}