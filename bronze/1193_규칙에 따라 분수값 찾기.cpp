#include <stdio.h>
#include <string.h>

int main() {
	int n,sum=0,a,b;
	scanf("%d", &n);

	for (int i = 1; i < 10000000; i++) {
		sum = sum + i;
		if (n <= sum) {
			sum = sum - i;
			for (int j = 0; j <= i; j++) {
				sum++;
				if (n == sum) {
					a = (1 + j);
					b = (i - j);
					if (i % 2 == 0) {
						printf("%d/%d", a, b);
					}
					else {
						printf("%d/%d", b, a);
					}

					return 0;
				}
			}
		}
	}
}

