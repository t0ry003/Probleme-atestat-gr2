/*
    By Rares C. Olteanu - Mon May 09 2022
*/
#include "iostream"

using namespace std;

int main() {
    for (int i = 100; i <= 999; i++) {
        int c1 = i / 100 % 10;
        int c2 = i / 10 % 10;
        int c3 = i % 10;
        int sum = c1 * c1 * c1 + c2 * c2 * c2 + c3 * c3 * c3;
        if (i == sum)
            cout << i << " ";
    }
}