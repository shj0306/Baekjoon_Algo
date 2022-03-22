//#include <bits/stdc++.h>
//using namespace std;
//int a[2001];
//int dp[2001][2001];
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int n;
//    cin >> n;
//    for(int i=1;i<=n;i++){
//        cin >> a[i];
//        dp[i][i] = a[i];
//        a[i]+=a[i-1];
//    }
//    for(int d=1;d<n;d++){
//        for(int i=1;i+d<=n;i++)
//            dp[i][i+d] = a[i+d]-a[i-1]+max(dp[i][i+d-1], dp[i+1][i+d]);
//    }
//    cout << dp[1][n];
//}