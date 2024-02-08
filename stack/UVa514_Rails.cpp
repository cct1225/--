#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    int ans[1001];
    while(cin>>n&&n!=0)
    {
        while(1)//test multiple times
        {
            stack<int>st;
            int c=1;
            for(int i=0;i<n;i++)
            {
                int num;
                cin>>num;
                if(num==0)
                {
                    c=0;
                    break;
                }
                ans[i]=num;
            }
            if(c==0)
            {
                cout<<endl;//welcome the next testcase
                break;
            }
            int record=0;
            for(int i=0;i<n;i++)
            {
                st.push(i+1);
                while(st.size()!=0&&st.top()==ans[record])//repeatedly execute FIND
                {
                    st.pop();
                    record++;
                }
            }
            if(st.size()==0)    cout<<"Yes"<<endl;
            else    cout<<"No"<<endl;
        }
        
        
    }
}