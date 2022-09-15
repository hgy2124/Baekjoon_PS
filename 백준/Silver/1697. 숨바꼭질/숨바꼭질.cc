#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

int n, k;
queue <pair<int,int>> q;
bool visited[100001]={false};
int temp,cnt=0; 

void bfs(int x) {
	visited[x] = true;
	q.push(make_pair(x,cnt));

	while (!q.empty()) {
		temp = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (temp == k) {
			cout<<cnt;
			break;
		}
			
		if (temp + 1 <= 100000 && !visited[temp+1]) {
			q.push(make_pair(temp+1,cnt+1));
			visited[temp+1] = true;
		}
		if (temp - 1 >= 0 && !visited[temp-1]) {
			q.push(make_pair(temp - 1, cnt + 1));
			visited[temp-1] = true;
		}
		if (temp * 2 <= 100000 && !visited[temp*2]) {
			q.push(make_pair(temp * 2, cnt + 1));
			visited[temp*2] = true;
		}
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> k;
	bfs(n);
}