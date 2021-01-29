// https://www.acmicpc.net/problem/11719

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int cnt = 100;
    while (cnt--) {
        getline(cin, str);
        if (str == "")
            break;

        cout << str << '\n';
    }

    return 0;
}