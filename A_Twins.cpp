//greedy approach
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    int n, i;
    cin >> n;

    int arr[n];
    //int size = sizeof(arr) / sizeof(arr[0]); number of elements
    int sum1 = 0;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1 = sum1 + arr[i];
    }
    sort(arr, arr + n); //sorting in ascending order

    int sum2 = 0; //other sum
    i = n - 1;
    int count = 0;
    while (sum2 <= (sum1 / 2) && i >= 0) //comparing sum1 and sum2
    {
        sum2 = sum2 + arr[i];
        i--;
        count++; //counter to count the number of coins
    }
    cout << count << "\n";
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