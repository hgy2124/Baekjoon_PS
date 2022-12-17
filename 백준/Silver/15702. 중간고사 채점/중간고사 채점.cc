#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int prob[102];
int score[100002];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, m; cin >> n >> m;

	//배점 저장
	for (int i = 1; i <= n; i++)
		cin >> prob[i];
	
	int id=100000, num;
	char c;
	for (int i = 1; i <= m; i++) {
		cin >> num;
		if (id > num)	id = num;
		//채점
		for (int j = 1; j <= n; j++) {
			cin >> c;
			if (c == 'O')
				score[num] += prob[j];
		}
	}

	int maxid=id, maxscr=0;
	for (int i = 1; i <= 100000; i++) {
		if (score[i] > maxscr) {
			maxid = i;
			maxscr = score[i];
		}
	}
	cout << maxid << " " << maxscr;
}