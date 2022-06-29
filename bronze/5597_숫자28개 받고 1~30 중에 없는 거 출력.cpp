#include <stdio.h>

int main() {
	int arr[31]={0,}, n;

	for (int i = 1; i < 29; i++) {
		scanf("%d", &n);
		arr[n] = n;
	}

	for (int i = 1; i < 31; i++) {
		if (arr[i] != i) {
			printf("%d\n", i);
		}
	}
}