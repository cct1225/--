#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<long long>s;
    int n=1500;
    s.insert(1);
    n--;
    while(n)
    {
        auto begin=s.begin();
        long long x=*begin;
        s.erase(begin);
        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);
        n--;

    }
    cout<<"The 1500'th ugly number is "<<*s.begin()<<".";
}