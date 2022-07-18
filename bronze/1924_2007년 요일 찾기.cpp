#include <iostream>
#include <vector>

using namespace std;

//벡터는 배열이나 포인터처럼 메모리 미리 세팅할 필요X
vector<int> vt1 = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
vector<string> vt2 = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main() {
	int x, y;
	cin >> x>> y;
	for (int i=1; i < x; i++) {
		y += vt1[i];
	}
	cout << vt2[y % 7] << '\n';
}