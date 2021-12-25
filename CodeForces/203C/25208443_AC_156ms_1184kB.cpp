    #include<bits/stdc++.h>
    //arn 
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