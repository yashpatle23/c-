#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)

template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;


int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        rep(i, n)cin >> a[i];
        sort(all(a));
        int j = 0;
        vector<int> ans(n);
        for(int i = 0; i < n; i += 2) {
            ans[i] = a[j++];
        }
        for(int i = 1; i < n; i += 2) {
            ans[i] = a[j++];
        }
        a = ans;
        int f = 0;
        for(int i = 0; i < n; ++i) {
            if (a[i] < a[(i + 1) % n] && a[i] < a[(!i ? n - 1 : i - 1)]) continue;
            else if (a[i] > a[(i + 1) % n] && a[i] > a[(!i ? n - 1 : i - 1)]) continue;
            else {
                f=1;
                break;
            }
        }
        if(!f){
        cout << "YES"<<endl;
        for(auto i : a)
            cout << i << ' ';
        cout << endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}