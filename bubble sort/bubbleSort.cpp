#include <iostream>
using namespace std;


void bubbleSort(int a[], int n) {
    int pass, i, temp, swapped = 1;
    for (pass = n - 1; pass >= 0 && swapped; pass--) {
        swapped = 0;
        for (i = 0; i <= pass -1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = 1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }

    bubbleSort(a, n);
    cout << "sorted" << endl;
    for (int i = 0; i <= n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}