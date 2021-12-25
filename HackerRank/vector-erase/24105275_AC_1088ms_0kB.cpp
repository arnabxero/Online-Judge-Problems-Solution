#include<bits/stdc++.h>
#include<vector>
#include<iostream>

        using namespace std;

int main ()
{
    vector<int>arr;
   
    int n, x, i, p, a, b;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    cin>>p;
    cin>>a;
    cin>>b;

    arr.erase(arr.begin()+(p-1));
    arr.erase(arr.begin()+(a-1), arr.begin()+(b-1));

    cout<<arr.size()<<endl;

    for(i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
        
    return 0;

}
