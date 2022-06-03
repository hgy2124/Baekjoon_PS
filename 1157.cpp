#include <stdio.h>
#include <string.h>

int main() {
	char word[1000000];
	int idx[26], i = 0, len, x, v, vidx = 0, d = 0;

	scanf("%s", word);

	for (; i < 26; i++) {
		idx[i] = 0;
	}
	i = 0;
	len = strlen(word);
	for (; i < len; i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			word[i] += ('a' - 'A');
		}
		x = word[i] - 'a';
		idx[x] += 1;
	}

	v = idx[0];
	i = 1;

	for (; i < 26; i++) {
		if (idx[i] > v) {
			v = idx[i];
			vidx = i;
			d = 0;
		}
		else if (v==idx[i] && v != 0) {
			d=1;
		}
	}

	if (d==1) {
		printf("?");
	}
	else {
		printf("%c", vidx + 'A');
	}
}
