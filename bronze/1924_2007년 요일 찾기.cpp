#include <iostream>
#include <vector>

using namespace std;

//���ʹ� �迭�̳� ������ó�� �޸� �̸� ������ �ʿ�X
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