#include<iostream>
using namespace std;

void push(int bin[], int n, int &ci);
void init(int bin[], int &count, int &ci);
int pop(int bin[], int &ci);
void display(int bin[], int &count, int &ci);
void findBinary(int bin[], int &count, int&ci, int &inp);

int main()
{
int inp, count, ci;
int bin[20];
char c = '\0';

init(bin,count,ci);

    cout << "Enter a decimal number to convert into binary: ";
    cin >> inp;

    findBinary(bin, count, ci, inp);
    display(bin, count, ci);

return 0;
}

void init(int bin[], int &count, int &ci)
{
count = 0;
ci = 0;

for (int i = 0;i < 20;i++)
    bin[i] = -1;
}

int pop(int bin[], int &ci)
{
    int temp = bin[--ci];
    return temp;
}

void push(int bin[], int n, int &ci)
{
    bin[ci] = n;
    ci++;
}

void display(int bin[], int &count, int &ci)
{
    cout << "\nYour binary is: ";
    while (count != 0)
    {
        cout << pop(bin, ci);
        count--;
    }
    cout << endl;
}

void findBinary(int bin[], int &count, int&ci, int &inp)
{
    while (inp != 0)
    {
        int rem = inp % 2;
        inp /= 2;
        push(bin, rem, ci);
        count++;
    }
}