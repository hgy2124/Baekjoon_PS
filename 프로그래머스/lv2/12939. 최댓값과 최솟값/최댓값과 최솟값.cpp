#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    istringstream iss(s);
    char space = ' ';
    string buf;
    vector <int> vt;
    
    while(getline(iss,buf,space)){
        vt.push_back(stoi(buf));
    }
    sort(vt.begin(),vt.end());
    answer=to_string(vt.front()) + " " + to_string(vt.back());
    
    return answer;
}