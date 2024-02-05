#include <iostream>
#include <deque>
#include <vector>
#include <cmath>
#include <algorithm>
#include<map>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    deque<int> od;
    deque<int> ev;
    vector<int> v;

    for(int j=0;j<t;j++) {
        od.clear();
        ev.clear();
        v.clear();
        map<int,int>mp;

        int num;
        cin >> num;

        for (int i = 1; i <= num; i++) {
            if (i % 2 == 1)  od.push_back(i);
            else  ev.push_back(i);
        }

        for (int i = 0; i < od.size(); i++) {
            v.push_back(od[i]);
        }

        if (num <= 3) {
            cout << "-1" << endl;
            continue;
        }

        if (num == 4) {
            cout << "3 1 4 2" << endl;
            continue;
        }

        for (int i = 0; i < od.size(); i++) {
           // cout << od[i] << " ";
        }
       
        for(auto x:od)
        {
            cout<<x<<" ";
        }
        int len=od.size();
        int w=od[len-1];

        if((w-2)%2==0&&w!=2)
        {
            cout<<w-2<<" ";
            mp[w-2]=1;
        }
        else if((w-3)%2==0&&w!=3) //查找是不是偶數(%2)
        {
            cout<<w-3<<" ";
            mp[w-3]=1;
        }
        else if((w-4)%2==0&&w!=4)
        {
            cout<<w-4<<" ";
            mp[w-4]=1;
        }

        int l=ev.size();
        for(int i=l-1;i>=0;i--)
        {
            if(mp[ev[i]]!=1)
            cout<<ev[i]<<" ";
        }
        cout<<endl;
    }
}
