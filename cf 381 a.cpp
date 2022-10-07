#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, h = n - 1;
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[l] > a[h])
            {
                ans1 += a[l];
                l++;
            }
            else
            {
                ans1 += a[h];
                h--;
            }
        }
        else
        {
            if (a[l] > a[h])
            {
                ans2 += a[l];
                l++;
            }
            else
            {
                ans2 += a[h];
                h--;
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}