#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n,sum=0,cnt=0,m;

	cin >> n;
	while (cnt<5) {
		m=n % 10;
		sum += pow(m, 5);
		n=n / 10;
		cnt++;
	}
	cout << sum << endl;
}