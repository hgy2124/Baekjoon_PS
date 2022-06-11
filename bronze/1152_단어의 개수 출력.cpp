#include <stdio.h>
#include <string.h>

int main() {
	char s[1000000];
	int wdcnt = 0, len = 0, i = 0;
	fgets(s, 1000000, stdin); //fgets함수는 \n을 가져옴.
	s[strlen(s) - 1] = 0;   //그래서 앞에 거를 0으로 해줌
	len = strlen(s);
	for (; i<len; i++) {
		if (s[i] == ' ')
			wdcnt ++;
	}
	wdcnt++;


	if (s[0] == ' ')
		wdcnt--;
	if (s[strlen(s) - 1] == ' ')
		wdcnt--;

	printf("%d", wdcnt);
}