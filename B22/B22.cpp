/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int n;

int prim(int x) {
    if (x == 0 || x == 1)
        return 0;
    for (int d = 2; d <= x / 2; d++)
        if (x % d == 0)
            return 0;
    return 1;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (prim(i) == 1)
            cout << i << " ";
}