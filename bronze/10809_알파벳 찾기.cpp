#include <stdio.h>
int main() {
	int idx[26], cnt = 0,n;
	char word[101];
	scanf("%s", word);
	for (; cnt < 26; cnt++) {
		idx[cnt] = -1;
	}
	cnt = 0;
	for (; word[cnt] != '\0'; cnt++) {
		n = word[cnt] - 'a';
		if (idx[n] == -1) { // 왜냐면 word가 null값이 나올때까지 반복되므로 필요
			idx[n] = cnt;
		}
	}
	cnt = 0;
	for (; cnt < 26;cnt++) {
	printf("%d", idx[cnt]);
	if (cnt < 26) {
		printf(" ");
	}

	}

}
