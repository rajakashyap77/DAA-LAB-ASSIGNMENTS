#include <bits/stdc++.h>
using namespace std;

void linear_search(int key, int a[], int n)
{
    int count = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
         count++;
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
        {
            cout << "YES" << endl;
        cout<<"Comparison : "<< count <<endl;
        }
    else
        {
            cout << "NO" << endl;
        cout<<"Comparison: "<< count <<endl;
        }
}

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int key;
        cin >> key;
        linear_search(key, a, n);
    }
    return 0;
}
