#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int n, m;

int arr[10];
vector <int> vt;
int check[100001] = { 0, };

void dfs(int temp, int x) {
    if (x == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << "\n";
    }
    else {
        for (int i = temp; i < vt.size(); i++) {
            arr[x] = vt[i];
            dfs(i, x + 1);
        }
    }
    
}

int main() {

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    int num;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        check[num]++;
        if(check[num]==1)
            vt.push_back(num);
    }

    sort(vt.begin(), vt.end());
    dfs(0,0);

}