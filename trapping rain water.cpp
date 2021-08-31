#include<bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n)
{
      int water = 0;
      int* max_height_left = new int[n];
      int* max_height_right = new int[n]
      max_height_left[0] = arr[0];
      max_height_right[n-1] = arr[n-1];
        
        for(int i = 1; i < n; i++)
        {
            max_height_left[i] = max(max_height_left[i-1],arr[i]);
        }
        for(int i = n-2; i >= 0; i--)
        {
            max_height_right[i] = max(max_height_right[i+1],arr[i]);
        }
        for(int i = 1; i < n-1; i++)
        {    
            water += (min(max_height_left[i],max_height_right[i]) - arr[i]);
        }
        return water;
    }


int main()
{
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin >> a[i];            
        }
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
