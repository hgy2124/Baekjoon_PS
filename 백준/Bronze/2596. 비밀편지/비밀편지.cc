#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int diff = 0;

char c[8][7];
char code[8][7]= { {'0','0','0','0','0','0'}, 
				   {'0','0','1','1','1','1'}, 
				   {'0','1','0','0','1','1'}, 
				   {'0','1','1','1','0','0'}, 
				   {'1','0','0','1','1','0'}, 
				   {'1','0','1','0','0','1'}, 
				   {'1','1','0','1','0','1'},  
				   {'1','1','1','0','1','0'} };
char word[8] = { 'A','B','C','D','E','F','G','H' };


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 6; j++)
			cin >> c[i][j];

	char ans[8];
	bool end = false;
	for (int i = 0; i < n; i++) {

		//알파벳 확인
		for (int j = 0; j < 8; j++) {
			int diff = 0;

			//코드 확인
			for (int k = 0; k < 6; k++)
				if (code[j][k] != c[i][k])diff++;
			if (diff <= 1) {
				ans[i] = word[j];
				break;
			}
			if (j == 7) {
				cout << i + 1;
				end = true;
			}
		}
		if (end)
			break;
	}
	if (!end) {
		for (int i=0;i<n;i++)
			cout << ans[i];
	}

}