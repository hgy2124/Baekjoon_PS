#include <iostream>
#include <map>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	map<int, int> mp;

	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		mp[num]++;
	}

	int m; 
	scanf("%d",&m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &num);
		printf("%d ", mp[num]);
	}
}