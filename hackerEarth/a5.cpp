#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int zCount = 0, oCount = 0;
    int i = 0;
    while(i < s.length() && s[i] == 'z') {
        zCount++;
        i++;
    }
    while(i < s.length() && s[i] == 'o') {
        oCount++;
        i++;
    }
    if(i == s.length() && oCount == 2 * zCount)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
