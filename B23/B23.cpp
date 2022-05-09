/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int n, x, y, z;

int main() {
    cin >> n >> x;
    for (int i = 2; i <= n; i++) {
        cin >> y;
        while (y > 0) {
            z = x % y;
            x = y;
            y = z;
        }
    }
    cout << x;
}