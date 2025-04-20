#include<iostream>
using namespace std;

int main() {
    int a[10] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = 10;

    for (int i = 0; i < n - 1; i++) {
        int count = 0;
        if (a[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                    a[j] = -1; // Mark the duplicate
                }
            }
            if (count > 0) {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}

