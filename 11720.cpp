#include <stdio.h>

int main() {
	int n, sum=0;
	char num[1000];
	scanf("%d", &n);
	scanf("%s", num);
	for (int count = 0; count < n; count++) {
		sum += num[count]-'0'; //문자로 이루어진 숫자를 아스키코드와 매치하여 
							   //인식함으로 '0'을 빼주면 int값을 얻을 수 있음. 
	}
	printf("%d", sum);
}