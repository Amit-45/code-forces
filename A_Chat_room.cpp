#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    string s;
    cin >> s;
    regex b("(.*h.*e.*l.*l.*o.*)"); //RE for the world similar to hello
    if (regex_match(s, b))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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