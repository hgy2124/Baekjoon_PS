#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {

	int len;
	char arr[101], arr2[101];
	
	cin >> arr;
	len = strlen(arr);

	for (int i=0; i<len; i++) {
		if ((arr[i] >= 'a') && (arr[i] <= 'z')){
			arr2[i]= arr[i]-'a'+'A';
		}
		else {
			if ((arr[i] >= 'A') && (arr[i] <= 'Z')) {
				arr2[i] = arr[i] - 'A' + 'a';
			}
		}
	}
	arr2[len] = '\0';
	cout << arr2 << endl;
}