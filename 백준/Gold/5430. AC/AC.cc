#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s,arr;
	deque <int> dq;
	int t; cin >> t;
	int n,num=0,temp;
	bool flag = { false };
	bool reverse = { false };
	while (t--) {
		cin >> s;
		cin >> n;
		cin >> arr;
		dq.clear();
		flag = false;
		reverse = false;
		num = 0;

		for (int i = 1; i < arr.size()-1; i++) {
			flag = true;
			if (arr[i] != ',') {
				num += (arr[i] - '0');
				num *= 10;
			}
			else {
				dq.push_back(num / 10);
				num = 0;
			}
		}
		if(flag==true)
			dq.push_back(num / 10);
		flag = false;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'R') {
				if (reverse == true)
					reverse = false;
				else
					reverse = true;
			}
			else {
				if (dq.empty() == true) {
					cout << "error" << "\n";
					flag = true;
					break;
				}
				else {
					if (reverse == true) {
						dq.pop_back();
					}
					else {
						dq.pop_front();
					}
				}
			}
		}

		if (flag == false) {
			cout << "[";
			temp = dq.size();
			if (reverse == true) {
				for (int i = 0; i < temp; i++) {
					cout << dq.back();
					dq.pop_back();
					if (i + 1 != temp)
						cout << ",";
				}
			}
			else {
				for (int i = 0; i < temp; i++) {
					cout << dq.front();
					dq.pop_front();
					if (i + 1 != temp)
						cout << ",";
				}
			}
			cout << "]" << "\n";
		}
			
	}

}