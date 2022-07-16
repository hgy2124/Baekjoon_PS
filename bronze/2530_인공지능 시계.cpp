#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int a, b, c,d,temp;
	cin >> a >> b >> c;
	cin >> d;
	if (c + d < 60) {
		cout << a<< " " << b << " " << c + d;
	}
	else {
		temp = (c + d) % 60;
		b += (c + d) / 60;
		c = temp;
		if (b < 60) {
			cout << a << " " << b << " " << c;
		}
		else {
			temp = b % 60;
			a += b / 60;
			b = temp;
			if (a == 24) {
				cout << '0' << " " << b << " " << c;
			}
			else if(a>24) {
				temp = abs(a%24);
				a = temp;
				cout << a << " " << b << " " << c;
			}
			else {
				cout << a << " " << b << " " << c;
			}
		}
	}
}