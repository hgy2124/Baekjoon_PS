#include <stdio.h>
#include <string.h>

int main() {

	int cnt=0,flag=0,len;
	char arr[257];

	while (true) {
		cnt = 0;
		fgets(arr,sizeof(arr),stdin);
		if (arr[0] == '#') {
			break;
		}
		len = strlen(arr);
		for (int i = 0; i < len; i++) {
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
				cnt += 1;
			}
		}
		printf("%d\n", cnt);
	}

}