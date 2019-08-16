#include<bits/stdc++.h>

using namespace std;



bool cmp(int i,int j)
{
    return i>j;         //descending order
}

int main() {

    int t,i,n,m,num;

    cin>>t;

    while (t--)
    {
        cin>>n>>m;

        vector<int>v;
        vector<int>::iterator it;
        queue<pair<int,int> >q;

        for (i=0;i<n;i++)
        {
            cin>>num;
            q.push(make_pair(num,i));
            v.push_back(num);
        }

        sort(v.begin(),v.end(),cmp);
        /*for(it=v.begin();it!=v.end();it++)
        {
            cout<<(*it)<<" ";
        }*/

        i=0;
        int time = 0;

        while (!q.empty())
        {
            int u = q.front().first;  //priority
            int w = q.front().second;  //position
            q.pop();

            if (u == v[i])
            {
                time++;
                if (w == m) break;
                i++;
            }
            else
            {
                q.push(make_pair(u,w));
            }
        }
        cout<<time<<endl;
    }

    return 0;
}
