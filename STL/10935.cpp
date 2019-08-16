#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    list< int >q;
    while(cin>>n && n!=0)
    {

        for(int i=1; i<=n; i++)
        {
            q.push_front(i);
        }
        int j =0;
        cout<<"Discarded cards: ";
        while(q.size()!=1)
        {
            if(j!=0)cout<<", ";
            cout<<q.back();
            q.pop_back();

            int a=q.back();
            q.pop_back();
           q.push_front(a);
           j++;
        }
        cout<<endl;
        cout<<"Remaining card: "<<q.front()<<endl;
        q.pop_front();

    }
    return 0;
}
