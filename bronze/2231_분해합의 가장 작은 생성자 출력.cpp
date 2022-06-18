#include <stdio.h>

int main() {
	int n, m,a,b;

	scanf("%d", &n);
	
	for (int i = 1; i < n; i++) { 
		a = i;
		b = i;
		
		while (a > 0) {
			b += a % 10;
			a /= 10;
		}
	
		if (b == n) {
			printf("%d", i);
			n = 0;
			break;
		}
	}

	if(n!=0)
		printf("0");
}