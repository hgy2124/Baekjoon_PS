#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int n,m;
string s;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m >> s;
	int cnt = 0;
	int temp=0;
	for (int i = 0; i < m-2; i++) {
		if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
			cnt++;
			i++;
		}
		else {
			if (cnt >= n)
				temp += cnt-n+1;
			cnt = 0;
		}
	}
	if (cnt >= n)
		temp += cnt-n+1;

	cout << temp;


}