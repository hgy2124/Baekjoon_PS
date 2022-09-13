#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int n, m;
int dist[101][101];
void find() {
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (i == j)
					continue;
				else if (dist[i][k] && dist[k][j]) {
					if (dist[i][j] == 0)
						dist[i][j] = dist[i][k] + dist[k][j];
					else
						dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;
	int a, b;
	while (m--) {
		cin >> a >> b;
		dist[a][b] = 1;
		dist[b][a] = 1;
	}

	find();

	int min = 101;
	int sum=0;
	int temp=0;
	for (int i = 1; i <= n; i++) {
		sum = 0;
		for (int j = 1; j <= n; j++)
			sum += dist[i][j];
		if (min > sum) {
			min = sum;
			temp = i;
		}
	}
	cout << temp;
}