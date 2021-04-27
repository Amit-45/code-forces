#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    string str1, str2;
    int i;
    cin >> str1 >> str2;
    for (i = 0; i < str1.length(); i++)
    {

        str1[i] = tolower(str1[i]); //toLower
        str2[i] = tolower(str2[i]);
    }

    if (str1 == str2)
    {
        cout << "0" << endl;
    }
    else
    {
        for (i = 0; i < str1.length(); i++)
        {
            if (str1[i] < str2[i])
            {
                cout << "-1" << endl;
                break;
            }
            if (str1[i] > str2[i])
            {
                cout << "1" << endl;
                break;
            }
        }
    }
}
// for (i = 0; i < str1.length(); i++)
// {
//     for (j = 0; j < str2.length(); j++)
//     {
//        if (str1[i] > str2[j])
//         {
//             return 1;
//         }
//         else if (str1[i] < str2[j])
//         {
//             return -1;
//         }
//         else if (str1[i] = str2[j])
//         {
//             return 0;
//         }
//     }
// }
// if (str1[i] > str2[j])
// {
//     cout << 1 << endl;
// }
// else
// {
//     cout << 0 << endl;
// }

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