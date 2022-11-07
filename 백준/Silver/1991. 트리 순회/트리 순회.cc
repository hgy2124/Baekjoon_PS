#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

char arr[27][3];
char a, b, c;

void front(char k) {
	if (k == '.') {
		return;
	}
	else {
		cout << k;
		front(arr[k - 'A'][0]);
		front(arr[k - 'A'][1]);
	}
}
void mid(char k) {
	if (k == '.') {
		return;
	}
	else {
		mid(arr[k - 'A'][0]);
		cout << k;
		mid(arr[k - 'A'][1]);
	}
}
void back(char k) {
	if (k == '.') {
		return;
	}
	else {
		back(arr[k - 'A'][0]);
		back(arr[k - 'A'][1]);
		cout << k;
		
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		arr[a - 'A'][0] = b;
		arr[a - 'A'][1] = c;
	}
	front('A');
	cout << "\n";
	mid('A');
	cout << "\n";
	back('A');

}