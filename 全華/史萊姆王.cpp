#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        pq.push(num);
    }
    int cnt=0;
    while(pq.size()>1)
    {
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        cnt+=(a+b);
        pq.push(a+b);
    }
 
    cout<<cnt;
}
