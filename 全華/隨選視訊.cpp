#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int L[101],S[101];
    for(int i=0;i<n;i++)
    {
        cin>>L[i]>>S[i];
    }
    int dp[n+1][m+1]={(0,0)};
    for(int i=L[0];i<=m;i++)
    {
        dp[0][i]=S[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j<L[i]) 
            {
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-L[i]]+S[i]);
            }
        }
    }
    cout<<dp[n-1][m];



}
