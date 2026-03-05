#include <iostream>
using namespace std;
int main() {
    long long l, r, k;
    cin >> l >> r >> k;
    long long count = (r / k) - ((l - 1) / k);
    cout << count;
    return 0;
}
