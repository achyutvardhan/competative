#include <iostream>
#include <string>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    int count = 0;
    int tempSt = 0;
    int size = s.length() - 1;

    for (int i = 1; i < size; i++)
        if (s[i] == '1' && s[i - 1] == '0')
            count++;

    if (s[0] == '1')
        count++;

    if (s[n - 2] == '0')
        count++;

    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
