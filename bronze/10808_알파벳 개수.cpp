#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	int arr[26]={0,};
	cin >> s;
	for (int i = 0; i<s.size(); i++)
		arr[s[i]-97]++;
	for (int i = 0; i < 26; i++)
		cout << arr[i]<<" ";

}