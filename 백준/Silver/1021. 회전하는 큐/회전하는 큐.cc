#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <deque>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, m; cin >> n >> m;
	deque<int> dq;
	for (int i = 1; i <= n; i++) 
		dq.push_back(i);

	int num;
	int cnt = 0;
	while (m--) {
		cin >> num;
		int idx = find(dq.begin(), dq.end(), num) - dq.begin(); //위치 찾기

		while (dq.front() != num) { //제일 앞에 찾는 값이 올 때까지 반복

			if (idx < dq.size() - idx) { //왼쪽으로 찾는게 빠르다면
				dq.push_back(dq.front());
				dq.pop_front();
			}
			else {//오른쪽으로 찾는게 빠르다면
				dq.push_front(dq.back());
				dq.pop_back();
			}
			cnt++;
		}
		dq.pop_front(); //뽑아내기
	}
	cout << cnt;
}