#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	char sc1[3];
	cin >> sc1;

	if (sc1[0] == 'A') {
		if(sc1[1]=='+') {
			cout << "4.3"<<endl;
		}
		else if (sc1[1] == '0') {
			cout << "4.0" << endl;
		}
		else {
			cout << "3.7" << endl;
		}
	}
	else if (sc1[0] == 'B') {
		if (sc1[1] == '+') {
			cout << "3.3" << endl;
		}
		else if (sc1[1] == '0') {
			cout << "3.0" << endl;
		}
		else {
			cout << "2.7" << endl;
		}
	}
	else if (sc1[0] == 'C') {
		if (sc1[1] == '+') {
			cout << "2.3" << endl;
		}
		else if (sc1[1] == '0') {
			cout << "2.0" << endl;
		}
		else {
			cout << "1.7" << endl;
		}
	}
	else if (sc1[0] == 'D') {
		if (sc1[1] == '+') {
			cout << "1.3" << endl;
		}
		else if (sc1[1] == '0') {
			cout << "1.0" << endl;
		}
		else {
			cout << "0.7" << endl;
		}
	}
	else {
		cout << "0.0" << endl;
	}
}