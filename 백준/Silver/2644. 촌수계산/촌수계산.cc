#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string>
typedef long long ll;

using namespace std;

int n,num1,num2,m;

bool visited[102];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin>>n>>num1>>num2>>m;

	vector <int> vt[102];

	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		vt[x].push_back(y);
		vt[y].push_back(x);
	}

	queue <pair<int,int>> q;

	int cnt=0;
	q.push({max(num1,num2),cnt});

	bool flag=false;
	while(!q.empty() && flag==false){
		auto v=q.front();
		q.pop();
		for(int i=0;i<vt[v.first].size();i++){
			if(vt[v.first][i]==min(num1,num2)){
				cout<<v.second+1;
				flag=true;
				break;
			}
			else if (!visited[vt[v.first][i]]){
				visited[vt[v.first][i]]=true;
				q.push({vt[v.first][i],v.second+1});
			}
		}
	}
	if(flag==false)	cout<<-1;
}