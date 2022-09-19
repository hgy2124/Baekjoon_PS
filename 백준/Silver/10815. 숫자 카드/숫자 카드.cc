#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

ll arr[20000001]={0,};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;

	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[num+10000000]++;
	}

	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		if (arr[num+10000000] == 1)
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}


}