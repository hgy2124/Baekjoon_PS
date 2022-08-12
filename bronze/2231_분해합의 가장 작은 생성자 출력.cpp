#include <iostream>

using namespace std;

int main() {
	int n,a,b;

	cin>>n;
	int flag = 0;
	for (int i = 1; i < n; i++) { 
		a = i;
		b = i;
		
		while (a > 0) {
			b += a % 10;
			a /= 10;
		}
	
		if (b == n) {
			cout << i;
			flag=1;
			break;
		}
	}

	if (flag == 0)
		cout << 0;
}