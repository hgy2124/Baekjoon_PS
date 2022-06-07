#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	int i = 0,i4=0, n, cnt = 0, len, eng[26], flag = 0, str;

	scanf("%d", &n);

	i = 0;
	while (i < n) { 
		scanf("%s", word);
		len = strlen(word);
		flag = 0;
		i4 = 0;
		while (i4 < 26) {
			eng[i4++] = 0;
		}

		for (int i2 = 0; i2 < len; i2++) {
			str = word[i2] - 'a';

			if (word[i2] - 'a' == word[i2 - 1] - 'a') {
			}
			else {
				eng[str] += 1;
			}
		}

		for (int i3 = 0; i3 < 26; i3++) {
			if (eng[i3] >= 2) //2랑 같을 수도 있고 클수도 있는데 ==2로 해서 틀렸었음.
				flag = 1;
		}

		if (flag == 1) {
		}
		else {
			cnt += 1;
		}
		i++;
	}
	printf("%d", cnt);

}