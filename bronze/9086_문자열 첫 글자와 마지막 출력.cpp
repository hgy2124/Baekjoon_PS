#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t,len;
	cin >> t;
	for (int i = 0; i < t; i++) {
		char arr[1001];
		cin >> arr;
		len = strlen(arr);
		cout << arr[0] << arr[len-1] << endl;
	}
}