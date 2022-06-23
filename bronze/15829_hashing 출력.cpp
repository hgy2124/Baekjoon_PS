#include <stdio.h>

int L;
unsigned long long num;
long long R = 1, MOD = 1234567891;

char str[51];
int main() {
    // freopen("input.txt", "r", stdin);

    scanf("%d %s", &L, str);

    for (int i = 0; i < L; i++) {
        num += (str[i] - 'a' + 1) * R; num %= MOD;

        R *= 31; R %= MOD;
    }

    printf("%lu", num);
}