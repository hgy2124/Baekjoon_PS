#include <stdio.h>
#include <string.h>
#include <cmath> //ceil함수(올림)을 위해서 선언

int main() {
	char word[15],num[15];
	int cnt = 0,len,sum=0;

	scanf("%s", word);
	len = strlen(word);

	for (; cnt < len; cnt++) {
		num[cnt] = word[cnt] - 'A'+1;
		if (num[cnt] <= 15) {
			num[cnt] = ceil(float(num[cnt]) / 3) + 2; //실수로 해야 나누고 올렸을때 제대로 정수가 나옴

		}
		else if (num[cnt] == 19 || num[cnt]==22 || num[cnt] == 25 || num[cnt] == 26){
			num[cnt] = ceil(float(num[cnt]) / 3) + 1;
		}
		else {
			num[cnt] = ceil(float(num[cnt]) / 3) + 2;
		}
	}
	cnt = 0;
	for (; cnt < len; cnt++) {
		sum += num[cnt];
	}
	printf("%d", sum);
}