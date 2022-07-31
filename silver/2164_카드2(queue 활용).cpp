#include <iostream>
#include <queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	queue <int> q;
	for (int i = 1; i < n+1; i++) {
		q.push(i);
	}
	int a;
	for (int i = 1; i<n; i++) {
		q.pop();
		a=q.front();
		q.push(a);
		q.pop();
	}
	cout << q.back();
}