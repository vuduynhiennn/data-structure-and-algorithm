#include <iostream>
using namespace std;

int factorial(int a) {
    if (a ==1 || a == 0) {
        return 1;
    } else {
    return a * factorial(a-1);
    }
}

int main() {
    int n;
    cin >> n;
    int a = factorial(n);
    cout << a;
    return 0;
}