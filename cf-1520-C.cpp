#include <iostream>

using namespace std;
int arr[100][100];
void fnceven(int n);
void fncodd(int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 3)
        {
            printf("2 9 7\n4 6 3\n1 8 5\n");
            continue;
        }

        if (n % 2 == 0)
            fnceven(n);
        else
            fncodd(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
}
void fnceven(int n)
{
    int x = 2;
    for (int i = n - 1; i > (n / 2 - 1); i--)
    {
        for (int k = 0; k < n; k++)
        {
            arr[i][k] = x;
            x += 2;
        }
    }
    x = 1;
    for (int i = 0; i < (n / 2 - 1); i++)
    {
        for (int k = 0; k < n; k++)
        {
            arr[i][k] = x;
            x += 2;
        }
    }
    x = n * n - 1;

    for (int i = 0; i < n; i++)
    {
        arr[n / 2 - 1][i] = x;
        x -= 2;
    }
    int temp = arr[n / 2 - 1][n / 2 - 1];
    arr[n / 2 - 1][n / 2 - 1] = arr[n / 2 - 1][0];
    arr[n / 2 - 1][0] = temp;
}

void fncodd(int n)
{
    int x = 2;
    for (int i = n - 1; i > (n / 2); i--)
    {
        for (int k = 0; k < n; k++)
        {
            arr[i][k] = x;
            x += 2;
        }
    }
    x = 1;
    for (int i = 0; i < (n / 2); i++)
    {
        for (int k = 0; k < n; k++)
        {
            arr[i][k] = x;
            x += 2;
        }
    }

    int y = x;
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        if (y % 2 == 0)
        {
            arr[n / 2][j] = y;
            j++;
        }
        y++;
    }
    y = x;
    for (i = 0; i < n; i++)
    {
        if (y % 2 != 0)
        {
            arr[n / 2][j] = y;
            j++;
        }
        y++;
    }
}