#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	string s;
	int sum = 0;

	int cnt1=0, cnt2=0, flag=0;
	//0이된 개수, (의 개수가 같을 때 yes

	for (int i = 0; i < t; i++) {
		cin >> s;
		cnt1 = 0;
		cnt2 = 0;
		flag = 0;
		sum = 0;
		for (int j = 0; flag==0; j++) {
			if (s[0] == ')') {
				cout << "NO" << "\n";
				flag = 1;
			}
			else if (s[j] == '(') {
				sum += 1;
				cnt1 += 1;
			}
			else if (s[j] == ')') {
				sum -= 1;
				cnt2 += 1;
			}
			if (sum < 0) {
				cout << "NO" << "\n";
				flag = 1;
			}
			if (j== s.length())
				flag = 2;
		}
		if (flag == 2) {
			if (sum != 0)
				cout << "NO" << "\n";
			else if (cnt1 == cnt2)
				cout << "YES" << "\n";
		}
	}
}