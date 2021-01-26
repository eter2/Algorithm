// https://www.acmicpc.net/problem/2739

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < 9; i++) {
        cout << n << " * " << num << " = " << n * num << '\n';
        num++;
    }
    return 0;
}