#include <iostream>
#include <string>
using namespace std;


class Person {
    //data member
    private:
        string _name;
        //constructor
    public:
        Person (string name) {
            _name = name;
        }
        //destructuor
        // function / method
    void writeInfor() {
        cout << "my name is: " << _name << endl;
    }

};
int main() {
    string me;
    Person huy = Person("Huy");
    huy.writeInfor();
    Person ban = Person()
    cout << endl << endl << endl;
    return 0;
}