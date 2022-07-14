#include <iostream>

using namespace std;

int main() {
	
	int n, sum=0,avg;
	
	for (int i = 0; i < 5; i++) {
		cin >> n;
		if (n < 40) {
			sum += 40;
		}
		else {
			sum += n;
		}
	}

	avg = sum / 5;
	cout << avg;
}