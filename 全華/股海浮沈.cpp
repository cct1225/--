#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[n][2],C[101];
    for(int i=0;i<n;i++)
    {
        cin>>C[i];
    }
    dp[0][0]=C[0];
    dp[0][1]=0;
    for(int i=1;i<n;i++)
    {
        dp[i][0]=min(dp[i-1][0],C[i]);
        dp[i][1]=max(dp[i-1][1],C[i]-dp[i-1][0]);
    }
    cout<<dp[n-1][1];
}
