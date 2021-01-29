// https://www.acmicpc.net/problem/11721

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        cout << str[i];
        if ((i + 1) % 10 == 0)
            cout << '\n';
    }
    return 0;
}