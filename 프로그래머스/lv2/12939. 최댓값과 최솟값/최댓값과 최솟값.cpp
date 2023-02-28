#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

#define INT_MAX 210000000;
#define INT_MIN -210000000;

string solution(string s) {
    string answer = "";
    char sep = ' '; //공백을 조건으로 주려고
    istringstream iss(s);//입력스트림
    string buf;//저장해놓을 버퍼
    vector <int> vt;
    
    int MIN = INT_MAX;
    int MAX = INT_MIN;
    while(getline(iss, buf, sep)) {
        vt.push_back(stoi(buf));
    }
    sort(vt.begin(),vt.end());
    string min_str = to_string(vt.front());
    string max_str = to_string(vt.back());
    answer = min_str + " " + max_str;
    return answer;
}