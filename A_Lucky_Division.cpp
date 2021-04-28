#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int num;
    cin >> num;
    int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    //All lucky numbers below 1000
    for (int i = 0; i < 14; i++)
    {
        if (num % arr[i] == 0)
        {
            cout << "YES"
                 << "\n";
            return;
        }
    }
    cout << "NO"
         << "\n";
}
int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    //cin>>t;
    while (t--)
    {
        solve();
    }
}