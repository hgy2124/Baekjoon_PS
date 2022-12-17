#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;  cin >> n;

	queue <int> q;
	int num;
	while (true) {
		cin >> num;
		
		if (num == -1)	
			break;
		else if (num == 0)	
			q.pop();
		else if (q.size() == n)	
			continue;
		else 
			q.push(num);
	}

	if (q.empty())
		cout<<"empty";
	else {
		while (!q.empty()) {
			cout << q.front() << " ";
			q.pop();
		}	
	}
}