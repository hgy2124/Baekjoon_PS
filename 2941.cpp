#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	int a=0,cnt=0,len; //°³¼ö
	scanf("%s", word);
	len = strlen(word);
	for (; cnt < len; cnt++) {
		if (word[cnt] == 'c' && (word[cnt + 1] == '=' || word[cnt + 1] == '-')) {
			a += 1;
			cnt++;
		}
		else if (word[cnt] == 'd' && word[cnt + 1] == 'z' && word[cnt + 2] == '=') {
			a += 1;
			cnt = cnt + 2;
		}
		else if (word[cnt] == 'd' && word[cnt + 1] == '-') {
			a += 1;
			cnt++;
		}
		else if (word[cnt] == 'l' && word[cnt + 1] == 'j') {
			a += 1;
			cnt++;
		}
		else if (word[cnt] == 'n' && word[cnt + 1] == 'j') {
			a += 1;
			cnt++;
		}
		else if (word[cnt] == 's' && word[cnt + 1] == '=') {
			a += 1;
			cnt++;
		}
		else if (word[cnt] == 'z' && word[cnt + 1] == '=') {
			a += 1;
			cnt++;
		}
		else {
			a += 1;
		}
	}
		printf("%d", a);
}