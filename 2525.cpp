#include <stdio.h>

int main()
{
	int a, b, c, h, m;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	if (b + c >= 60) {
		h = a + ((b + c) / 60);
		m = (b + c) % 60;
	}
	else {
		h = a;
		m = b + c;
	}

	if (h >= 24) {
		if (m == 60) {
			printf("%d %d", h - 24, 0);
		}
		else {
			printf("%d %d", h - 24, m);
		}

	}
	else {
		printf("%d %d", h, m);
	}

}