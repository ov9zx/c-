#include <iostream>
using namespace std;

int main() {
   
    short* a = new short[7];

   
    for (short i = 0; i < 7; i++) {
        cin >> a[i];
    }

  
    for (short i = 0; i < 7 - 1; i++) {
        for (short j = 6; j > i; j--) {
            
            if (a[j] < a[j - 1]) {
             
                short box = a[j];
                a[j] = a[j - 1];
                a[j - 1] = box;
            }
        }
    }

   
    for (short j = 0; j < 7; j++) {
        cout << a[j] << " ";
    }

    delete[] a;
    return 0;
}
