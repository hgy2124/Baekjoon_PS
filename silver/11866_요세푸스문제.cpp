#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	int arr[1001];

	for (int i = 1; i < n + 1; i++) {
		arr[i] = i;
	}

	//cnt가 k가 되면 출력
	int cnt = 1, flag=0;

	//출력되면 i++을 함. n과 같아지면 flag를 세우고 for문을 빠져나온다.
	int i = 1;
	for (int i2 = 1; flag == 0; cnt++, i2++) {
		if (i2 > n)
			i2 = 1;
		if (arr[i2] == i2 && cnt == k) {
			if (i == 1) {
				if (i == n){
					cout << "<" << i2 << ">";
					flag = 1;
				}
				else
				cout << "<" << i2 << ", ";
			}
			else if (i == n) {
				cout << i2 << ">";
				flag = 1;
			}
			else {
				cout << i2 << ", ";
			}
			arr[i2] = 0;
			i++;
			cnt = 0;

		}
		else if (arr[i2] == 0)
			cnt--;
	}
}