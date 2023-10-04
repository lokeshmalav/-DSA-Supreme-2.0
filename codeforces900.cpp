#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = i; j < n; j++) {
                if (a[j] == k) {
                    count++;
                }

                int len = j - i + 1;
                int threshold = len / 2;

                if (count > threshold) {
                    found = true;
                    break;
                }
            }

            if (found) {
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
