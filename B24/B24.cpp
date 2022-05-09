/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int prim(int x) {
    if (x == 0 || x == 1)
        return 0;
    for (int d = 2; d <= x / 2; d++)
        if (x % d == 0)
            return 0;
    return 1;
}

int main() {
    for (int i = 100; i <= 999; i++)
        if (prim(i) == 1)
            cout << i << " ";
}