#include <iostream>
#include <cmath> //cpp�� cmath�� �ø� ���� �Լ��� ���� c�� math.h��

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	double a, b, v;
	int day=1;

	cin >> a >> b >> v;
	
	day+=ceil((v - a) / (a - b));
	cout << day;
}