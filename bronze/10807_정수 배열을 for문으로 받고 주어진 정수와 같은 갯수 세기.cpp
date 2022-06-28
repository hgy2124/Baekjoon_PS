#include <stdio.h>

int main() {
	int n,v,num[100],cnt=0;

	scanf("%d", &n);
	
	for (int i = 0; i < n;i++) {
		scanf("%d",&num[i]); //요렇게 배열을 바로 받을 수도 있다.
	}
	
	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (num[i] == v) {
			cnt++;
		}
	}

	printf("%d", cnt);

}