#include <stdio.h>

int main() {
	int n, j = 1, i = 1, flag = 0;
	scanf("%d", &n);

	while (flag == 0) {

		if (n>j+6*i) {
			j += 6*i;
			i += 1;
		}
		else if (n == 1) {
			flag = 1;
			printf("1");
		}
		else if (n <= j + 6 * i) {
			flag = 1;
			printf("%d", i+1);
		}
	}
}