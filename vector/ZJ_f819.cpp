#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    vector<int>vec;
    int sum=0;
    cin>>n;
    while(n--)
    {
        int s,d;
        cin>>s>>d;
        if(d>100)
        {
            vec.push_back(s);
            sum+=(d-100)*5;
        }
    }
    sort(vec.begin(),vec.end());
    if(vec.size())
    {
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }    
        cout<<endl;
        cout<<sum;
    }
    else    cout<<"0";
     
}