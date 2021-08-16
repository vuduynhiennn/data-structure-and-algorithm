#include <iostream>
using namespace std;

int sumNaturalNumbers(int number) {
    if (number == 0) {
        return 0;
    }
    return number + sumNaturalNumbers(number - 1);
}
int main() {
    cout << sumNaturalNumbers(10);
    return 0;
}