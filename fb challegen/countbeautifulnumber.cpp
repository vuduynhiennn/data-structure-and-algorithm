#include <iostream>
using namespace std;
int countBeautifulNumbers(int a, int b);
int main(int argc, char **argv)
{
    cout << countBeautifulNumbers(111, 122);
    return 0;
}
// 
int countBeautifulNumbers(int a, int b)
{
    int count = 0;

    for (int i = a; i <= b; i++)
    {
        if (i < 10)
        {
            count++;
        }
        else
        {
            if ((i - (i / 10) * 10) == (i / 10))
            {
                count++;
            }
            cout << "================" << endl;
        }
    }
    return count;
}

// 11 66 88 33 44 55
