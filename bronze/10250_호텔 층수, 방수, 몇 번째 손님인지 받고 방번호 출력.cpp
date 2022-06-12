#include <stdio.h>

int main(){

int t, h, w, n,r_y,r_x;

scanf("%d", &t);

for (int i = 0; i < t; i++) {
	scanf("%d %d %d", &h, &w, &n);
	if (n%h==0) {
		r_y = h;
	}
	else {
		r_y = n%h;
	}

	if (n <= h) {
		r_x = 1;
	}
	else if (n / h == n){
		r_x = n;
	}
	else if (n / h == w) {
		r_x = w;
	}
	else if (n % h == 0) {
		r_x = n / h;
	}
	else {
		r_x = n / h + 1;
	}

	if (r_x < 10) {
		printf("%d0%d\n", r_y, r_x);
	}
	else {
		printf("%d%d\n", r_y, r_x);
	}
}
}