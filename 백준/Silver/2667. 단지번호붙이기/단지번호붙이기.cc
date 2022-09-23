#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#define ll long long

using namespace std;

int n;
int arr[26][26];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

vector <int> temp;
queue<pair<int, int>> q;

int a, b;
int nx, ny;
int block = 0;
int cnt = 0;
int temp2 = 1;

int bfs(int x,int y) {
	temp2 = 1;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		arr[a][b]=0;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = a + dx[i];
			ny = b + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && arr[nx][ny] == 1) {
				temp2++;
				arr[nx][ny] = 0;
				q.push(make_pair(nx, ny));
			}
		}
	}
	block++;
	return temp2;
}

int main(void) {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	
	while (cnt != n * n) {
		cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (!arr[i][j])
					cnt++;
				else {
					temp.push_back(bfs(i,j));
				}
					
			}
		}
	}

	printf("%d\n",block);

	sort(temp.begin(), temp.end());
	for(int i=0;i<temp.size(); i++)
		printf("%d\n",temp[i]);
}