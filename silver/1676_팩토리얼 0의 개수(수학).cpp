#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll n; cin >> n;
	if (n == 0)
		cout << 0;

	else {
		int temp;
		temp=n / 5+n/25+n/125; //n이 500까지임. 2는 많으니까 5의 개수만 세어도 0을 알수있음
		cout << temp;
	}
	
}