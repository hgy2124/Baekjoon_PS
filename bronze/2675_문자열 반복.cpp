#include <stdio.h>
#include <string.h>
int main() {
	int t,c,cnt = 0,len;
	char s[20];
	scanf("%d", &t);
	for (; cnt < t; cnt++) {
		scanf("%d %s", &c,s); 
		len = strlen(s);
		for (int i = 0; i < len;i++) {
			for (int x = 0; x < c;x++) {
				printf("%c", s[i]);
			}
		}
		printf("\n");
	}
}