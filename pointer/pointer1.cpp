#include <iostream>
using namespace std;
int main() {
    int array[10];
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < 10; i++) {
        int* p = &array[i];
        cout << p << " " << sizeof(p) << endl;
    }
    return 0;
}