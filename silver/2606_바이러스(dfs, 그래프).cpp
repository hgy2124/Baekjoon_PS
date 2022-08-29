#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#define ll long long

using namespace std;

vector<int> vt[101];
stack<int> s;
bool visited[101];
int cnt = 0;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int node; cin >> node;
	int edge; cin >> edge;
	
	int a, b;
	for (int i = 0; i < edge; i++) {
		cin >> a >> b;
		vt[a].push_back(b);
		vt[b].push_back(a);
	}

	cout << vt[2];

}