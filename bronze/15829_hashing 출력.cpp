#include <stdio.h>
#include <string.h>

int main() {
	char s[1000001];
	int wdcnt = 0, len = 0, i = 0;
	fgets(s, 1000001, stdin); //fgets함수는 \n을 가져옴.
	len = strlen(s);
	for (; i < len; i++) {
		if (s[i] == ' ')
			wdcnt++;
	}
	wdcnt++;

	if (s[0] == ' ')
		wdcnt -= 1;
	if (s[len - 2] == ' ')
		wdcnt--;

	printf("%d", wdcnt);
}