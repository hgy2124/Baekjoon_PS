#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first == b.first)
		return false;
	return (a.first < b.first);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int,string>> arr;
	int age;
	string name;

	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		arr.push_back(make_pair(age, name));
	}

	//sort�ʹ� �ٸ� ���� sorting �ص� ������ ������
	stable_sort(arr.begin(), arr.end(),compare);

	for (int i = 0; i < n; i++)
		cout << arr[i].first<<" "<<arr[i].second<<"\n";
}