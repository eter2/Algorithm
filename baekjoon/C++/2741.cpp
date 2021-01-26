// https://www.acmicpc.net/problem/2741

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;
    while (n--) {
        cout << num << '\n';
        num++;
    }
    return 0;
}