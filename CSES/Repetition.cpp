#include <bits/stdc++.h>
using namespace std;

int main() {
    string sq;
    cin >> sq;
    int n = sq.length();
    int maxcount = 1;
    int currentcount = 1;

    for (int i = 0; i < n - 1; i++) {
        if (sq[i] == sq[i + 1]) {
            currentcount++;
        } else {
            currentcount = 1;
        }

        maxcount = max(maxcount, currentcount);
    }

    cout << maxcount << endl;

    return 0;
}
