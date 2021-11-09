#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input2.txt", "r", stdin);   
    freopen("output2.txt", "w", stdout); 
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
        cin >> x; // element to search
        count = 0;
        int low = 0, high = n - 1;
        int flag = 0;
        while (low <= high)
        {
            count++;
            int mid = (low + high) / 2;
            if (arr[mid] == x)
            {
                cout << "Present " << count << endl;
                flag = 1;
                break;
            }
            else if (x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        if (flag==0)
            cout << "Not Present " << count << endl;
    }
    return 0;
}