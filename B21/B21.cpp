/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int sumCif(int x) {
    int s = 0;
    while (x != 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        if (sumCif(i) == m)
            cout << i << " ";
}