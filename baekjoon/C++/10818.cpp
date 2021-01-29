// https://www.acmicpc.net/problem/10818

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max = -1000000;
    int min = 1000000;
    while (n--) {
        int a;
        cin >> a;
        if (max < a)
            max = a;

        if (min > a)
            min = a;
    }

    cout << min << " " << max;

    return 0;
}