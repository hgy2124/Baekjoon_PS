#include <stdio.h>
#include <string.h>
#include <cmath> //ceil�Լ�(�ø�)�� ���ؼ� ����

int main() {
	char word[15],num[15];
	int cnt = 0,len,sum=0;

	scanf("%s", word);
	len = strlen(word);

	for (; cnt < len; cnt++) {
		num[cnt] = word[cnt] - 'A'+1;
		if (num[cnt] <= 15) {
			num[cnt] = ceil(float(num[cnt]) / 3) + 2; //�Ǽ��� �ؾ� ������ �÷����� ����� ������ ����

		}
		else if (num[cnt] == 19 || num[cnt]==22 || num[cnt] == 25 || num[cnt] == 26){
			num[cnt] = ceil(float(num[cnt]) / 3) + 1;
		}
		else {
			num[cnt] = ceil(float(num[cnt]) / 3) + 2;
		}
	}
	cnt = 0;
	for (; cnt < len; cnt++) {
		sum += num[cnt];
	}
	printf("%d", sum);
}