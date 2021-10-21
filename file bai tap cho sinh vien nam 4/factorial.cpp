#include <iostream>
using namespace std;
int factorial(int var);

int main() {
    int number;
    cout << "nhập số cần tính giai thừa: ";
    cin >> number;
    cout << "giai thừa của: " << number << ": ";
    cout << factorial(number);
    return 0;
}

int factorial(int var) {
    if (var == 1) {
        return 1;
    }
    return var * factorial(var - 1);
}