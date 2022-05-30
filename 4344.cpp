#include <stdio.h>

int main()
{
	int c, n, over = 0, sum = 0, avg, count = 0, arr[1000];
	scanf("%d", &c);

	for (int a = 0; a < c; a++) {
		sum = 0;
		count = 0;
		over = 0;

		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		for (; count < n; count++) {
			sum += arr[count];
		}
		avg = (double)sum / (double)n;
		count = 0;
		for (; count < n; count++) {
			if (arr[count] > avg) {
				over += 1;
			}
		}
		printf("%.3f%%\n", (double)over / (double)n * 100);

	}
}