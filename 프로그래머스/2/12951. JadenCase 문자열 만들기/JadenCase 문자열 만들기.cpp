#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    istringstream iss(s);
    char space = ' ';
    string temp;

    while (getline(iss, temp, space)) {
        if (temp.size() > 0) {
            if (temp[0] - 'A' >= 0) {
                answer += toupper(temp[0]);
            }
            else {
                answer += temp[0];
            }

            for (int i = 1; i < temp.size(); i++) {
                if (temp[i] - 'a' < 0) {
                    answer += tolower(temp[i]);
                }
                else {
                    answer += temp[i];
                }
            }

        }
        if (!iss.eof()) {  // 마지막 단어가 아닌 경우에만 공백 추가
            answer += " ";
        }
        temp = "";
    }
    return answer;
}