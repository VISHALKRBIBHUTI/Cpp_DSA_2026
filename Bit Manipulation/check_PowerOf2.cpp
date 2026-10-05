#include <iostream>
using namespace std;

bool checkPowerOf2(long long num) {

    if (num == 0) {
        return false;
    }

    return (num & (num - 1)) == 0;
}

int main() {

    long long num;
    cin >> num;

    if (checkPowerOf2(num)) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }

    return 0;
}