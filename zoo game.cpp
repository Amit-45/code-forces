include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,b) for(int i=a;i<(b);i++)
#define ff first
#define ss second
#define vi vector<int>


int main()
{
    string s;
    cin>>s;
    ll countZ=0,countO=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='z')
            countZ++;
        else
            countO++;
    }
    if(countZ*2 == countO)
        cout <<" YES"<< endl;
    else
        cout <<"NO"<< endl;
    
    
    
    return 0;
}
Terms
