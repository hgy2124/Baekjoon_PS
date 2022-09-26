
#include <stdio.h>
#include <queue>
#include <cmath>
using namespace std;

int main() {

	int n; scanf("%d", &n);
	int x;

	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > heap;

	while (n--) {
		scanf("%d", &x);
		if (x == 0) {
			if (heap.empty())
				printf("0\n");
			else {
				printf("%d\n", heap.top().second);
				heap.pop();
			}
		}
		else
			heap.push(make_pair(abs(x),x));
	}
}