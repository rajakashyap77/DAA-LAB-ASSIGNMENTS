#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input1.txt", "r", stdin);   
    freopen("output1.txt", "w", stdout); 
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
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (x == arr[i])
            {
                cout << "Present " << count << endl;
                flag = 1;
                break;
            }
        }
        if (flag==0)
            cout << "Not Present " << count << endl;
    }
    return 0;
}
