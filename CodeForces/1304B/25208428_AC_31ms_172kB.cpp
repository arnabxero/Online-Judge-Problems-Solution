#include<bits/stdc++.h>
//arnab
int t;
int n, m;
using namespace std;
int vis[105];
string a[105];
string ans1, ans2;
 
bool check(string b, string c){
    for(int i = 0; i < b.size(); i++){
        if(b[i] != c[c.size() - 1 - i])
            return 0;
    }
    return 1;
}
 
bool check2(string y){
    for(int i = 0; i < y.size() / 2; i++){
        if(y[i] != y[y.size() - 1 - i])
            return 0;
    }
    return 1;
}
 
void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            for(int j = 1; j != i && j <= n; j++){
                if(!vis[j]){
                    if(check(a[i], a[j])){
                        ans1 += a[i];
                        vis[i] = 1;
                        vis[j] = 1;
                    }
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            if(check2(a[i])){
                if(a[i].size() > ans2.size()){
                    ans2 = a[i];
                    vis[i] = 1;
                }
 
            }
        }
    }
    cout << 2 * ans1.size() + ans2.size() << endl;
    cout << ans1 << ans2;
    for(int i = ans1.size() - 1; i >= 0; i--)
        cout << ans1[i];
    cout << endl;
 
}
 
int main(){
    solve();
}