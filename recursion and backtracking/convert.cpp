#include <iostream>
#include <string>
using namespace std;

string findBinary(int decimal, string result) {
    if(decimal==0) {
        return result;
    }

    result = to_string(decimal % 2) + result;
    return findBinary(decimal/2, result);
}

int main() {    
    string result = findBinary(233,"");
    cout << result;
    return 0;
}