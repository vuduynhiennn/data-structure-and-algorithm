#include <iostream>
using namespace std;


int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } 
    return n * factorial(n - 1);
}

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

int main() {    
    int number;
    cin >> number;
    cout << number << endl;
    cout << factorial(number);
    cout << "\n" << number << endl;
    cout << sum(number);
    return 0;
}