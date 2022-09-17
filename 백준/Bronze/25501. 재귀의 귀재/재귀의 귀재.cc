#include <stdio.h>
#include <string.h>

int cnt = 1;

int recursion(const char* s, int l, int r) {
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else {
		cnt++;
		return recursion(s, l + 1, r - 1);
	}
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}

int main() {

	int t; scanf("%d", &t);
	char c[1001] = { 0 };
	bool temp;
	while (t--) {
		cnt = 1;
		scanf("%s", c);
		temp = isPalindrome(c);
		printf("%d %d\n", temp, cnt);
	}
}