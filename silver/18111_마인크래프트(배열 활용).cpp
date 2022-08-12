#include <iostream>

using namespace std;

int main() {

	int n, m, b;
	cin >> n >> m >> b;

	int block[257]={0,};
	int num;

	//각 층의 블럭 총 개수 세기
	for (int i = 0; i < n; i++) {
		for (int i2 = 0; i2 < m; i2++) {
			cin >> num;
			for (int i3 = 1; i3 <= num; i3++){
				block[i3]++;
			}
		}
	}

	int time = 0,temp_t=0;
	int temp_b = b;
	int temp_i = 0;

	for (int i = 0; i <= 256; i++) {
		time = 0;
		temp_b = b;
		//메꾸기
		for (int i2 = 1; i2 <= i; i2++) {
			temp_b -= (n * m - block[i2]);
			time += (n * m - block[i2]);
		}
		
		//파기
		for (int i2 = 256; i2 > i; i2--) {
			temp_b += block[i2];
			time += (2*block[i2]);
		}
		if (i == 0) {
			temp_t = time;
			temp_i = i;
		}
		if (temp_b<0){
			break;
		}
		if (temp_t >=time) {
			temp_t = time;
			temp_i = i;
		}
	}
	cout << temp_t<< " " << temp_i;
}