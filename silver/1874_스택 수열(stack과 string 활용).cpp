#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	stack<int> st;
	int num;
	string s;
	int i = 1;
	int flag = 0;
	for (int cnt = 0; cnt < n;cnt++) {
		cin >> num;
		if (i <= num) {
			while (i<=num) {
				st.push(i);
				s.append("+");
				i++;
			}
			st.pop();
			s.append("-");
			i--;
		}
		else {
			if (st.top() == num){
				st.pop();
				s.append("-");
			}
			else {
				cout << "NO";
				flag = 1;
				break;
			}
			i--;
		}
		i++;
	}
	if (flag == 0) {
		while (!st.empty()) {
			st.pop();
			s.append("-");
		}
		for (int i = 0; i < s.size(); i++)
			cout << s[i] << "\n";
	}
	
}