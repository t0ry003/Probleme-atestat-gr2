/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int CMMDC(int x, int y) {
    while (x != y)
        if (x > y)
            x -= y;
        else
            y -= x;
    return x;
}

int main() {
    int n, x, y, c;
    cin >> n >> x;
    for (int i = 2; i <= n; i++) {
        cin >> y;
        x = CMMDC(x, y);
    }
    cout << x;
}