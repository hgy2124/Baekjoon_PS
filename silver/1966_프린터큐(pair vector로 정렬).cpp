#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int n,m;
	vector<pair<int, int>> vt;
	
	int imp,cnt=0;

	while(t--) {
		vt.clear();
		cin >> n >> m;

		for (int i = 0; i < n; i++) {
			cin >> imp;
			vt.push_back(pair<int,int>(imp, i));
		}

		cnt = 0; //cnt�� �ش��ϴ� �ε��� ĭ�� ���� �ϳ��� Ȯ��
		while (cnt <vt.size()) {
			for (int i2 = 0; i2 < vt.size(); i2++) {
				if (cnt + i2 >= vt.size()) break;
				if (vt[cnt].first < vt[cnt+i2].first) {
					//cntĭ�� ���� �����
					vt.push_back(vt[cnt]);
					vt.erase(vt.begin() + cnt);  
					i2 = 0;//++�Ǹ� 1�� ��
				}
			}
			cnt++;
		}

		for (int i = 0; i < n; i++)
			if (vt[i].second == m) cout << i+1 << "\n";
	}
}