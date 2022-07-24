#include <iostream>
#include <algorithm>

using namespace std;

//compare ����
bool compare(string a, string b)
{
	if (a.length() < b.length())
		return true;
	/*string.compare�� ������ 0, ������ ����,ũ�� ��� return����. 
	���� ��� ���������� ���� �Ÿ� �޾ƾ� �ϴϱ� <0�� �����*/
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

	//algorithm�� �ִ� sort �Լ��� �̿��ؼ� ����
	sort(arr, arr + n, compare);
	
	//�ܾ� ���. �񱳴���� ���� arr[0]�� ���� ����صΰ� ����
	string s = arr[0];
	cout << arr[0] << "\n";

	for (int i = 1; i < n; i++)
	{
		//s�� arr�� �������� ��츸 ���
		if (s.compare(arr[i]) != 0)
		{
			cout << arr[i] << "\n";
			s = arr[i];
		}
	}
}

