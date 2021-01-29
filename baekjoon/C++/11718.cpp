// https://www.acmicpc.net/problem/11718

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (1) {
        getline(cin, str);
        if (str == "")
            break;

        cout << str << '\n';
    }

    return 0;
}