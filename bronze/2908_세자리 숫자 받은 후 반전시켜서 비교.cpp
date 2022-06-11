#include <stdio.h>
#include <stdlib.h>

int main() {
	char n1[100], n2[100],n11[100],n22[100];
	int a, b;
	scanf("%s %s", n1, n2); //공백으로 구분된 숫자를 받는데 따로따로 받아짐.
	for (int count = 0; count<3; count++) {
		n11[count] = n1[2-count];
		n22[count] = n2[2-count];
	}
	a = atoi(n11); //문자열을 숫자로 변환해주는 함수 stdlib.h 라이브러리에 존재
	b = atoi(n22);
	if (a>b){
		printf("%d",a);
	}
	else {
		printf("%d",b);
	}
}