#include<iostream>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        stack<char>st;
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())    st.push(s[i]);
            //{
            else
            {
                if(st.top()=='('&&s[i]==')')
                {
                    st.pop();
                }
                else if(st.top()=='['&&s[i]==']')
                {
                    st.pop();
                }
                else    st.push(s[i]);
            //}
            }
        }
        if(st.empty())  cout<<"Yes"<<endl;
        else    cout<<"No"<<endl;
    }
}