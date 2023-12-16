//This code can be used to extract the decimal part of a number and can also used to find the location of decimal point in a number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long double m;
        cin >> m;
        int y = floor(m);
        long double z = m - y;
        while (true)
        {
            if (fabs(z - round(z)) > numeric_limits<double>::epsilon())
            {
                z = z * 10;
            }
            else
            {
                break;
            }
        }
        int myInt = static_cast<int>(z);
    }
    return 0;
}
