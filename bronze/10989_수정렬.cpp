#include <stdio.h>

int main() {
	int n, num, len, max = 0,arr[10001]={0,};
	scanf("%d",&n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]+=1;
		if (num > max) {
			max = num;
		}
	}

	for (int i = 0; i < max+1; i++) {
		while (arr[i] != 0) {
			printf("%d\n", i);
			arr[i]--;
		}
	}
}