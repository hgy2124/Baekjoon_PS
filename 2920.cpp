#include <stdio.h>

//처음에는 flag를 세우는 형태로 짰는데 그렇게 되면 마지막 수만 descending값이더라도 
// descending이 나오게 됨. 그래서 p라는 변수를 줬다.

int main() {
	int n,p = 0;

	for (int i = 1; i < 9; i++) {
		scanf("%d", &n);
		if (n == i) {
			p += 1;
		}
		else if (n == 9 - i) {
			p-=1;
		}
	}

	if (p == 8) {
		printf("ascending");
	}
	else if (p == -8) {
		printf("descending");
	}
	else{
		printf("mixed");
	}
}