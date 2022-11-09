#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s; cin >> s;
	int k = 1;
	int sum = 0;

	for (int i = s.size() - 1; i >= 0; i--, k *= 16) {
		if (s[i] >= 'A' && s[i] <= 'F') {
			sum += (s[i] - 55) * k;
		}

		else  if (s[i] >= '0' && s[i] <= '9') {
			sum += (s[i] - '0') * k;
		}
	}
	cout<<sum;
}