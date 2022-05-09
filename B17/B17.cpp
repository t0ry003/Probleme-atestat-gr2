/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int v[100001], n, nr;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i += 2)
        if (v[i] % 2 == 0) {
            cout << v[i] << " ";
            nr++;
        }
    cout << '\n' << nr;
}