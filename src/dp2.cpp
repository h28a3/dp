#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    int dp1[n+1];
    int dp2[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=1;i<n+1;i++){
        dp1[i]=dp2[i-1]+a[i-1];
        dp2[i]=max(dp1[i-1],dp2[i-1]);
    }
    
    cout<<max(dp1[n],dp2[n]);
    return 0;
}
