#include <stdio.h>
#include <string.h>

int main() {
	char arr[99999];
	int flag = 0, flag2 = 0;

	while (flag == 0) {
		flag2 = 0;
		scanf("%s", arr);
		int len = strlen(arr);

		if (arr[0] == '0') { // '�� ���� �״�θ� ǥ��, "�� ���ڿ��� ǥ��
			flag = 1;
		}
		else {
			for (int i = 0; i < len / 2; i++) {
				if (arr[i] == arr[len - 1-i]) { //==�����ָ� =���� �˾Ƶ���
				}
				else {
					flag2 = 1;
				}
			}
			if (flag2 == 1) {
				printf("no\n");
			}
			else {
				printf("yes\n");
			}
			flag2 = 0;
		}
	}
}