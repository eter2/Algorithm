// https://www.acmicpc.net/problem/11022

#include <iostream>
using namespace std;

int main() {
    int cnt = 1;
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << cnt << ": " << a << " + " << b << " = " << a + b << endl;
        cnt++;
    }

    return 0;
}