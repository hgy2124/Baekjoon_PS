#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int num;
	vector<int> vt;
	double sum = 0;
	int arr[8002]={0,};

	for (int i = 0; i < n;i++) {
		cin >> num;
		vt.push_back(num);
		sum += num;
		arr[num+4000]+=1;
	}
	//»ê¼úÆò±Õ
	
	if(round(sum/n)==-0)
		cout << 0 << "\n";
	else
		cout << (int)round(sum/n)<<"\n";
	//Áß¾Ó°ª
	sort(vt.begin(), vt.end());
	cout << vt[(n+1)/2-1]<<"\n";
	//ÃÖºó°ª 
	vector<int> vt2;
	int temp = 0;
	for (int i = 0; i < 8001; i++) {
		if (temp < arr[i]) {
			temp = arr[i];
			vt2.clear();
			vt2.push_back(i);
		}
		else if (temp == arr[i]) {
			vt2.push_back(i);
		}
	}
	sort(vt2.begin(), vt2.end());
	if (vt2.size() > 1)
		cout << vt2[1]-4000 << "\n";
	else
		cout << vt2[0]-4000 << "\n";
	//¹üÀ§
	cout << vt[n - 1] - vt[0];
}