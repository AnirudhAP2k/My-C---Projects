#include <iostream>
using namespace std;
int main()
{
    int t;
    cout << "Test case" << endl;
    cin >> t;
    while (t--)
    {
        int m, n;
        cout << "Enter matrix value" << endl;
        cin >> m;
        cout << "Enter matrix value" << endl;
        cin >> n;
        int arr[m][n];
        int row[n];
        int col[m];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter " << i << j << " value" << endl;
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 0)
                {
                    row[j] = 0;
                    col[i] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int s = 0;
            if (row[i] == 0)
            {
                while (s < m)
                {
                    arr[s][i] = 0;
                    s++;
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            int s = 0;
            if (col[j] == 0)
            {
                while (s < n)
                {
                    arr[j][s] = 0;
                    s++;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " , ";
            }
            cout << endl;
        }
    }
    return 0;
}