#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        int dv = n % 10;
        n = n / 10;
        while (n > 0)
        {
            if (dv == 5)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}