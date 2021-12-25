#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, i;
        bool isround = true;
        cin>>n;
        int temp = n;
        int mult = 1, counter = 0;
        int arr[100000];

        if(n<10)
        {
            cout<<"1"<<endl<<n<<endl;
            continue;
        }

        else
        {
            while(n>9)
            {
                if(n%10!=0)
                {
                    isround = false;
                    break;
                }
                n/=10;
            }

            if(isround)
            {
                cout<<"1"<<endl<<temp<<endl;
                continue;
            }
            else
            {
                while(temp>0)
                {
                    n = temp%10;

                    if(n!=0)
                    {
                        arr[counter] = n*mult;
                        counter++;
                    }
                    mult*=10;
                    temp/=10;
                }

                cout<<counter<<endl;

                for(i=0; i<counter; i++)
                    cout<<arr[i]<<" ";
                cout<<endl;
            }
        }
    }
}
