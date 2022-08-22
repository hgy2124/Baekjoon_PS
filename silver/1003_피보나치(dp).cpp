#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    int fibo[41]={0,1};
    for (int i = 2; i < 41; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    int t; cin >> t;
    ll num;
    for(int i=0;i<t;i++){
        cin >> num;
        if (num == 0) {
            cout << 1<<' '<<0 << '\n';
        }
        else {
            cout << fibo[num - 1] << ' ' << fibo[num]<<'\n';
        }
    }
    
}