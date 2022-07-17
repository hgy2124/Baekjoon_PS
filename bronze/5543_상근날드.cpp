#include <iostream>

using namespace std;

int main() {
	int b1, b2, b3, c1, c2;
	cin>> b1>> b2 >> b3 >> c1 >> c2;

	int sum=0;
	if (b1 > b2) {
		if (b2 > b3) {
			sum += b3;
		}
		else if (b3 > b1) {
			sum += b2;
		}
		else {
			sum += b2;
		}
	}
	else {
		if (b3 < b1) {
			sum += b3;
		}
		else if (b3 > b2) {
			sum += b1;
		}
		else {
			sum += b1;
		}
	}
	if (c1 < c2) {
		sum += c1;
	}
	else {
		sum += c2;
	}

	cout << sum - 50;

}