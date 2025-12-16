#include <iostream>
using namespace std;

int main() {
    int * a = new int[7];

    for (short i = 0; i < 7; i++) {
        cin >> a[i];
    }

    for (short i = 1; i < 7; i++) {
        int change = 0;
        for (short j = 6; j >= i; j--) {
            if (a[j] < a[j - 1]) {
                int box = a[j];
                a[j] = a[j - 1];
                a[j - 1] = box;
                change++;
            }
        }
        if (change == 0) {
            break;
        }
    }

    for (short i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }
    
    delete[] a;
    return 0;
}
