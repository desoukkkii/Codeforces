#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int current = a[n - 1];
        int sum = current;

        for (int i = n - 2; i >= 0; i--) {
            current = min(current, a[i]);
            sum += current;
        }

        cout << sum << '\n';
    }

    return 0;
}