#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long product = 1;
    const long long MOD = 1000000007;

    for(int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        product = (product * x) % MOD;
    }

    cout << product;

    return 0;
}
