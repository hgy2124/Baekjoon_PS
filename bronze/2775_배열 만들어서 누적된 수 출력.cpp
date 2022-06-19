#include <stdio.h>

int main()
{
    int t, p = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);
        int arr[k + 1][n];

        for (int i = 0; i < n; i++)
        {
            arr[0][i] = i + 1;
        }
        for (int i = 1; i < k + 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int i2 = 0; i2 <= j; i2++)
                {
                    p += arr[i - 1][i2];
                }
                arr[i][j] = p;
            }
        }

        printf("%d\n", arr[k][n - 1]);
    }
}