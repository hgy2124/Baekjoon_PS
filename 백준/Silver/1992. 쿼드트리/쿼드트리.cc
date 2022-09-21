#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#define ll long long

using namespace std;

int n;
int cnt = 0; //0개수 세기

int arr[65][65];

void divide(int x, int y, int k) {
	cnt = 0;
	for (int i = x; i < x+k; i++) {
		for (int j = y; j < y+k; j++) {
			if (!arr[i][j])
				cnt++;
		}
	}
	if (cnt != 0 && cnt != k * k)
		printf("(");
	if (cnt==k*k)
		printf("%d", 0);
	else if (cnt == 0)
		printf("%d", 1);
	
	else {
		divide(x, y, k / 2);
		divide(x, y + k / 2, k / 2);
		divide(x + k / 2, y, k / 2);
		divide(x + k / 2, y + k / 2, k / 2);
		printf(")");
	}
	
}

int main(void) {

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d",&arr[i][j]);
		}
	}
	divide(0, 0, n);
}