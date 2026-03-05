#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long green, purple;
        cin >> green >> purple;
        int n;
        cin >> n;
        long long count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++) {
            int p1, p2;
            cin >> p1 >> p2;
            if(p1 == 1)
                count1++;
            if(p2 == 1)
                count2++;
        }
        long long cost1 = count1 * green + count2 * purple;
        long long cost2 = count1 * purple + count2 * green;
        cout << min(cost1, cost2) << endl;
    }
    return 0;
}
