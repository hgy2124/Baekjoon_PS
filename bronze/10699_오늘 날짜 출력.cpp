#include <stdio.h>
#include <time.h>

int main() {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	struct tm {
		int tm_sec;
		int tm_min;
		int tm_hour;
		int tm_mday;
		int tm_mon;
		int tm_year;
		int tm_wday;
		int tm_yday;
		int tm_isdst;
	};

	printf("%d-", tm.tm_year + 1900);

	if (tm.tm_mon + 1 < 10) {
		printf("0%d", tm.tm_mon + 1);
	}
	else {
		printf("%d", tm.tm_mon + 1);
	}

	printf("-%d",tm.tm_mday);
}