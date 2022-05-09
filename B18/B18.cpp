/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int n, a[100001];

int cmax(int x) {
    int cif = 0;
    while (x != 0) {
        if (x % 10 > cif)
            cif = x % 10;
        x /= 10;
    }
    return cif;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cout << cmax(a[i]) << " ";
}