#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1\n";
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
    } else {
        vector<int> permutation;
        
        if (n % 2 == 0) {
            for (int i = 2; i <= n; i += 2) {
                permutation.push_back(i);
            }
            for (int i = 1; i <= n; i += 2) {
                permutation.push_back(i);
            }
        } else {
            for (int i = n - 1; i >= 1; i -= 2) {
                permutation.push_back(i);
            }
            for (int i = n; i >= 2; i -= 2) {
                permutation.push_back(i);
            }
        }

        for (int i : permutation) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
