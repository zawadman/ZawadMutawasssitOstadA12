#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_sum = a[0];
    int curr_sum = a[0];
    int start = 0, end = 0, temp_start = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] > curr_sum + a[i]) {
            curr_sum = a[i];
            temp_start = i;  // start new subarray
        } else {
            curr_sum += a[i];  // extend previous subarray
        }

        if (curr_sum > max_sum) {
            max_sum = curr_sum;
            start = temp_start;
            end = i;
        }
    }

    // Output the result
    cout << max_sum << endl;

    //cout << endl;

    return 0;
}
