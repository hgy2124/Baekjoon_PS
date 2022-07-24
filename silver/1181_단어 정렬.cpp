#include <iostream>
#include <algorithm>

using namespace std;

//compare 정의
bool compare(string a, string b)
{
	if (a.length() < b.length())
		return true;
	/*string.compare는 같으면 0, 작으면 음수,크면 양수 return해줌. 
	같은 경우 사전순서상 빠른 거를 받아야 하니까 <0을 해줬다*/
	else if (a.length() == b.length() && a.compare(b) < 0)
		return true;

	return false;
}

int main() {

	int n;
	cin >> n;

	string* arr=new string[n];
	

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//algorithm에 있는 sort 함수를 이용해서 정렬
	sort(arr, arr + n, compare);
	
	//단어 출력. 비교대상이 없는 arr[0]을 따로 출력해두고 시작
	string s = arr[0];
	cout << arr[0] << "\n";

	for (int i = 1; i < n; i++)
	{
		//s와 arr가 같지않은 경우만 출력
		if (s.compare(arr[i]) != 0)
		{
			cout << arr[i] << "\n";
			s = arr[i];
		}
	}
}

