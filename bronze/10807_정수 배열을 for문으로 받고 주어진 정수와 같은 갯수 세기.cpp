#include <stdio.h>

int main() {
	int n,v,num[100],cnt=0;

	scanf("%d", &n);
	
	for (int i = 0; i < n;i++) {
		scanf("%d",&num[i]); //�䷸�� �迭�� �ٷ� ���� ���� �ִ�.
	}
	
	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (num[i] == v) {
			cnt++;
		}
	}

	printf("%d", cnt);

}