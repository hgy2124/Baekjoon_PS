#include <stdio.h>

int main() {
	int n, sum=0;
	char num[1000];
	scanf("%d", &n);
	scanf("%s", num);
	for (int count = 0; count < n; count++) {
		sum += num[count]-'0'; //���ڷ� �̷���� ���ڸ� �ƽ�Ű�ڵ�� ��ġ�Ͽ� 
							   //�ν������� '0'�� ���ָ� int���� ���� �� ����. 
	}
	printf("%d", sum);
}