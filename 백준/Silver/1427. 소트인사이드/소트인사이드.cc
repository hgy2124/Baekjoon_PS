#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	vector <int> vt;

	while (n >= 10) {
		vt.push_back(n % 10);
		n /= 10;
	}
	vt.push_back(n);

	sort(vt.begin(),vt.end(),greater<>());
	for (int i = 0; i < vt.size(); i++)
		cout << vt[i];
}