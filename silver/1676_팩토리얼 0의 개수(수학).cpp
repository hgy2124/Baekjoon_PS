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
		temp=n / 5+n/25+n/125; //n�� 500������. 2�� �����ϱ� 5�� ������ ��� 0�� �˼�����
		cout << temp;
	}
	
}