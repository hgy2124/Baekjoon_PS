#include <stdio.h>
#include <stdlib.h>

int main() {
	char n1[100], n2[100],n11[100],n22[100];
	int a, b;
	scanf("%s %s", n1, n2); //�������� ���е� ���ڸ� �޴µ� ���ε��� �޾���.
	for (int count = 0; count<3; count++) {
		n11[count] = n1[2-count];
		n22[count] = n2[2-count];
	}
	a = atoi(n11); //���ڿ��� ���ڷ� ��ȯ���ִ� �Լ� stdlib.h ���̺귯���� ����
	b = atoi(n22);
	if (a>b){
		printf("%d",a);
	}
	else {
		printf("%d",b);
	}
}