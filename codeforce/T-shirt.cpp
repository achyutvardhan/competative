#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[51];
        char b[51];
        cin >> a >> b;
        if (strpbrk(a, "M") && strpbrk(b, "L") || strpbrk(a, "S") && strpbrk(b, "M") || strpbrk(a, "S") && strpbrk(b, "L"))
        {
            cout << "<" << endl;
        }
        else if (strpbrk(a, "M") && strpbrk(b, "S") || strpbrk(a, "L") && strpbrk(b, "M") || strpbrk(a, "L") && strpbrk(b, "S"))
        {
            cout << ">" << endl;
        }
        else if (strpbrk(a, "S"))
        {

            if (strcmp(a, b) > 0)
            {
                cout << "<" << endl;
            }
            else if (strcmp(a, b) < 0)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else if (strpbrk(a, "L"))
        {
            if (strcmp(a, b) > 0)
            {
                cout << ">" << endl;
            }
            else if (strcmp(a, b) < 0)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            cout << "=" << endl;
        }
    }
}