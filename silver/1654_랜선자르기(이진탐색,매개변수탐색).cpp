#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long k, n;
	cin >> k >> n;
	
	//랜선 길이 저장
	vector<int> vt;
	long long num;
	for (int i = 0; i < k; i++) {
		cin >> num;
		vt.push_back(num);
	}
	
	sort(vt.begin(), vt.end());
	
	long long max_num = vt[k - 1];
	long long left = 1;
	long long mid = (left + max_num) / 2;
	long long sum = 0;

	while (left <= max_num) {
		sum = 0;
		for (int i = 0; i < k; i++) {
			sum += vt[i] / mid;
		}
		if (sum >= n) {
			left = left + 1;
			mid = (left + max_num) / 2;
		}
		else if (sum < n) {
			max_num = max_num - 1;
			mid = (left + max_num) / 2;
		}
			
	}
	cout << mid;
}
