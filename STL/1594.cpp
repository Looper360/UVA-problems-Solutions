#include<bits/stdc++.h>

using namespace std;

string s[1000000];
int j;
map<string,bool>M;

bool Repeated(vector<int>v)
{
    int i;

    s[j]="";
    char arr[100];

    for( i=0;i<v.size();i++)
    {
       sprintf(arr,"%d" ,v[i]);
            s[j]+=arr;
    }
    // cout<<s[j]<<endl<<endl;


     if(!M[s[j]])
     {
         M[s[j]]=true;
         return false;
     }
     else if(M[s[j]])return true;


}
bool AllZero( vector<int>v)
{
    set<int>S;
    for(int i=0;i<v.size();i++)
    {
        S.insert(v[i]);
    }
    if(S.size()==1)return true;
    else return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        M.clear();
        j=0;
        int ck=0;
        int n;
        cin>>n;
        vector<int>v;
        vector<int>::iterator it;

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;;i++,j++)
        {
            if(AllZero(v))
            {
                        ck=1;
                        break;
            }
             if(Repeated(v))
            {
                        ck=2;
                        break;
            }
            else
            {
                int first_element;
                for(int k=0;k<n;k++)
                {

                    if(k==0)first_element=v[0];
                    if(k==n-1)
                    {
                        v[k]=abs(v[k]-first_element);
                    }
                    else{
                        v[k]=abs(v[k]-v[k+1]);
                    }

                }
            }
/*
            cout<<"vector is: "<<endl;
                    for(it=v.begin();it!=v.end();it++)
                                cout<<(*it)<<" ";

                        cout<<endl;
*/
        }
        if(ck==1)cout<<"ZERO"<<endl;
        else if(ck==2) cout<<"LOOP"<<endl;

    }
}
