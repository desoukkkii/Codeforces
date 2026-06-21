#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        int mn = 100, mx = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            mn = min(mn, x);
            mx = max(mx, x);
        }

        cout << mx + 1 - mn << '\n';
    }
}