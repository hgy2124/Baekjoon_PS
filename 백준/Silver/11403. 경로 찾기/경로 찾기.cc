#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

bool visited[101][101] = {false};
int dist[101][101];
int n;

void find() {
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (dist[i][k] && dist[k][j])
					dist[i][j] = 1;
}


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;

	int num;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> dist[i][j];
		}
	}
	find();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << dist[i][j] << " ";
		}
		cout << "\n";
	}
}