#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string a, b;
	cin >> a >> b;

	int temp;
	//a 재배열
	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
	//b 재배열
	temp = b[0];
	b[0] = b[2];
	b[2] = temp;

	if (a > b)
		cout << a;
	else
		cout << b;
}