#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[100001];
    int B[100001];
    int num;
    for(int j=0;j<n;j++)
    {
        cin>>A[j];
    }
    for(int j=0;j<n;j++)
    {
        cin>>B[j];
    }
    sort(A,A+n);
    sort(B,B+n);
    int cnt=0;

    int i=0;
    int p=0;
    while(i<n&&p<n)
    {
        if(B[p]>A[i])   
        {
            cnt++;
            i++;
            p++;
        }
        else p++;
    }
    cout<<cnt;
}

