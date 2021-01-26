// https://www.acmicpc.net/problem/2742

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n;
    while (n--) {
        cout << num << '\n';
        num--;
    }
    return 0;
}