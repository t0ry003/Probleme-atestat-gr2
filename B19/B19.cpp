/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int x, a[10001], c = 1;

int main() {
    cin >> x;
    while (x != 0) {
        a[c++] = x % 10;
        x /= 10;
    }
    for (int i = 1; i < c - 1; i++)
        for (int j = i + 1; j < c; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);

    for (int i = 1; i < c; i++)
        cout << a[i];
}