#include <stdio.h>
#include <string.h>

int main() {
    int cnt = 0, len = 0;
    char s[1000000];
    scanf("%[^\n]s", s); //r공백도 문자열로 저장
    len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
            cnt++;
    }if (s[0] == ' ')
        cnt--;
    if (s[len - 1] == ' ')
        cnt--;

    printf("%d", cnt + 1);

    return 0;
}