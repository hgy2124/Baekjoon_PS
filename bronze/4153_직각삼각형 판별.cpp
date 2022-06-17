#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c,flag=0;

	while (flag == 0) {
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) {
			flag = 1;
		}
		else if (sqrt(pow(a, 2) + pow(b, 2)) == c || sqrt(pow(a, 2) + pow(c, 2)) == b || sqrt(pow(b, 2) + pow(c, 2)) == a) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}
}