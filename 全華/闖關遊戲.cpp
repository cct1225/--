#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[303][303];
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=n+1;j++)
        {
            A[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>A[i][j];
        }
    }
    int ans=A[1][1];
    int curx=1;
    int cury=1;
    while(curx!=3&&cury!=3)
    {
        
    }

}
