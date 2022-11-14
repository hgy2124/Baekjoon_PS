#include <bits/stdc++.h>

using namespace std;

bool isPrime[246913];

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    
    fill(isPrime + 2, isPrime + 246913, true);
    for (int i = 2; i <= 246912; i++) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= 246912; j += i)
                isPrime[j] = false;
        }
    }

    while (true) {
        cin >> n;
        int cnt = 0;
        if (n == 0)
            break;
        else {
            
            for (int i = n+1; i <= 2 * n; i++) {
                if (isPrime[i] == true)
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }

}