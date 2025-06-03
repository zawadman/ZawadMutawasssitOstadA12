#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "enter the number of steps" << endl;
    cin >> n;

    vector<long long> temp(n+1);
    // Using long long to handle larger Fibonacci numbers if needed
    if (n < 0) {
        cout << "Invalid number of steps" << endl;
        return 1; // Exit if the input is invalid
    }


    for (size_t i = 0 ; i < n+1 ; i++) {
        if (i == 0) {
            temp[i] = 1;
            //continue;
        }
        else if (i == 1) {
            temp[i] = 1;
            //continue;
        }
        else {
            temp[i] = temp[i - 1] + temp[i - 2];
            //continue;
        }
    }

    cout <<  static_cast<long long>(temp[n]) << endl;
    // The last element in temp will be the number of ways to climb n steps

    return 0;

}