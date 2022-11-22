#include <iostream>
#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s1, s2; cin >> s1 >> s2;
	int arr[27]={0,};
	for (auto a : s1) arr[a-'a']++;
	for (auto a : s2) arr[a-'a']--;

	int cnt = 0;
	for (auto a:arr)
		if (a != 0) cnt += abs(a);
	cout << cnt;
}