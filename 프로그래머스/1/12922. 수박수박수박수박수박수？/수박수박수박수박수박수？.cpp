#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";

    string first = "수";
    string second = "박";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            answer += first;
        else
            answer += second;
    }
    return answer;
}

int main() {
    int n;
    cin >> n;
    cout<<solution(n);
}