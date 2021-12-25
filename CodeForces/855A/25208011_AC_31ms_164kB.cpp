#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr); int _;
    map<string, int> mp; string str;
    while(mp.clear(), cin >> _)
        while(_--) {
            cin >> str;
            puts(mp[str]++ ? "YES" : "NO");
        }
    return 0;
}
