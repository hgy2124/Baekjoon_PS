#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, w, h,min;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	min = abs(x - w);
	if (abs(y - h) < min) {
		min = abs(y - h);
	}
	if (abs(y - 0) < min){
		min = abs(y - 0);
	}
	if (abs(x - 0) < min){
		min = abs(x - 0);
	}
	printf("%d", min);
}
