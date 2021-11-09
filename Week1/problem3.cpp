#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input3.txt", "r", stdin);   
    freopen("output3.txt", "w", stdout); 
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, count;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> x;
        count = 0;
        int l = 0, u = 2;
        int flag3 = 0;
        while (u < n)
        {
            count++;
            if (arr[l] <= x && x < arr[u])
            {
                break;
            }
            l = u;
            u *= 2;
        }
        for (int i = l; i < u && i < n; i++)
        {
            count++;
            if (arr[i] == x)
            {
                cout << "Present " << count << endl;
                flag3 = 1;
                break;
            }
        }
        if (!flag3)
            cout << "Not Present " << count << endl;
    }
    return 0;
}