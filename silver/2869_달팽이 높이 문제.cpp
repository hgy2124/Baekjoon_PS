#include <iostream>
#include <cmath> //cpp은 cmath에 올림 등의 함수가 있음 c는 math.h에

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