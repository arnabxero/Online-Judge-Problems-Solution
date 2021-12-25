#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=-1){
        int flag = 0;
        for(int i=n-1; i>0; i--){
            int m = n;
            int cnt = 0;
            while(cnt<i){
                if(m%i==1){
                    m = m-1-(m-1)/i;
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt==i){
                flag = i;
                break;
            }
        }
        if(flag){
            cout<<n<<" coconuts, "<<flag<<" people and 1 monkey"<<endl;
        }
        else{
            cout<<n<<" coconuts, no solution"<<endl;
        }
        cin>>n;
    }
    return 0;
}
