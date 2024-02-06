#include<iostream>
#include<set>
#include<utility>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int num1,num2;
    vector<pair<int,int>>v;
    while(n--)
    {
        cin>>num1>>num2;
        v.push_back(make_pair(num2, num1));
    }
    sort(v.begin(),v.end());
    set<int>s={0,l};
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i].second);
        auto before=s.find(v[i].second);
        auto after=s.find(v[i].second);
        before--;//moves to the next element
        after++;
        sum+=*after-*before;
    }
    cout<<sum;
}