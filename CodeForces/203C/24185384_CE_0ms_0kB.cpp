nnouncement:-
1.Try not to copy any code from online. You are being monitored.

If anyone caught on copy paste, his/her name will be announced.
#Be_Honest

Begin: 2020-02-12 19:00 BST
NEUB Practice Contest Level-1_(9)
End: 2020-02-13 18:00 BST
23:00:00
Ended
Overview
Problem
Status
Rank (23:00:00)
0 Comments
Previous12345…Next
Username
Prob
	Result
	Time
(ms)	Mem
(MB)	Lang
	Submit Time
arnab_xero
C
Accepted
248	1.2	
C++
22 hr ago
     
All Copyright Reserved © 2010-2020 Xu Han
Server Time: 2020-02-13 19:00:55 BST

#24169460 | arnab_xero's solution for [CodeForces-203C] [Problem C]
Status
Accepted
Time
248ms
Memory
1172kB
Length
932
Lang
GNU G++11 5.1.0
Submitted
2020-02-12 21:06:05
Shared

RemoteRunId
70867064
Select Code
#include<bits/stdc++.h>

using namespace std;

struct db
{
    int sz;
    int n;
};

bool comp(struct db arr1, struct db arr2)
{
    if(arr1.sz>arr2.sz)
        return true;
    return false;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, mem, lq, hq, i;

    cin>>n>>mem>>lq>>hq;

    int lqn, hqn;

    struct db arr[n];

    for(i=0; i<n; i++)
    {
        cin>>lqn>>hqn;

        arr[i].sz = (lqn*lq)+(hqn*hq);
        arr[i].n = i+1;
    }

    sort(arr, arr+n, comp);

    /*for(i=0; i<n; i++)
    {
        cout<<arr[i].sz<<endl;
    }*/

    int j = n-1, cn = 0, i_n = 0;
    int ar[n] = {-1};

    while((mem-arr[j].sz)>=0 && j>=0)
    {
        mem = mem - arr[j].sz;
        //cout<<mem<<" "<<arr[j].n<<endl;
        ar[i_n] = arr[j].n;
        i_n = i_n+1;

        j = j-1;
        cn = cn+1;
    }

    cout<<cn<<endl;

    for(i=0; i<cn; i++)
    {
        cout<<ar[i]<<" ";
    }

}