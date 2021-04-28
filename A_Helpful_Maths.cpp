#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    string resultString = "";

    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '1')
        {
            c1++;
        }
        if (x[i] == '2')
        {
            c2++;
        }
        if (x[i] == '3')
        {
            c3++;
        }
    }
    while (c1--)
    {
        resultString = resultString + "1+";
    }
    while (c2--)
    {
        resultString = resultString + "2+";
    }
    while (c3--)
    {
        resultString = resultString + "3+";
    }
    //resultString = resultString.substr(0, resultString.length() - 1);
    resultString = resultString.erase(resultString.length() - 1);
    cout << resultString << "\n";
}
