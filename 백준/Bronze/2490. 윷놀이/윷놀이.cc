#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int num;
	string s = "EABCDE";

	for (int i = 0; i < 3; i++) {
		int arr[3] = { 0, };
		for (int j = 0; j < 4; j++) {
			cin >> num;
			arr[num]++;
		}
		cout<<s[arr[0]];
		cout << "\n";
	}
	
	

}