#include <stdio.h>

int main() {
	int a, b, c,p;

	scanf("%d %d %d", &a, &b, &c);

		
		if (b>=c){
			printf("-1");
		}
		else {
			p = a / (c-b);
			printf("%d", p+1);
		}
}