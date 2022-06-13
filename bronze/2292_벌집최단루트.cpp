#include <stdio.h>

int main() {

	long n;
	scanf("%d", &n);
	if (n % 6 == 0) {
		printf("%d", n / 6);
	}
	else {
		printf("%d", (n / 6) + (n - ((n / 6) * 6)));
	}
}