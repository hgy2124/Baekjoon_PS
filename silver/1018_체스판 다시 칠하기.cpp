#include <iostream>
using namespace std;

//이중 포인터
char** board;

//다시 칠해야 하는 정사각형 개수
int findDiff(int x, int y)
{
	//1*1이 검은색부터 시작
	int BW_Cnt = 0;
	//1*1이 흰색부터 시작
	int WB_Cnt = 0;

	//8*8 비교
	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				if (board[i][j] != 'B')
					BW_Cnt++;
				else
					WB_Cnt++;
			}
			else
			{
				if (board[i][j] != 'W')
					BW_Cnt++;
				else
					WB_Cnt++;
			}
		}
	}

	//작은 개수
	if (BW_Cnt > WB_Cnt)
		return WB_Cnt;
	else
		return BW_Cnt;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	//2차원 동적 배열 할당
	board = new char* [N];
	for (int i = 0; i < N; i++)
		board[i] = new char[M];

	//입력 데이터
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> board[i][j];

	//8*8 찾기
	int min = -1;
	for (int i = 0; i + 7 < N; i++)
	{
		for (int j = 0; j + 7 < M; j++)
		{
			//최소 개수
			int cnt = findDiff(i, j);
			if (min == -1)
				min = cnt;
			else if (min > cnt)
				min = cnt;
		}
	}

	cout << min;

	return 0;
}
//출처 https://blog.naver.com/wlvkddlwkd/222477903198