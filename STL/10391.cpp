#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    vector<string>vec;

    int n;
    cin>>n;

    while(cin>>s1)
        vec.push_back(s1);

    int j,k,i;
    for(j=0;j<n;j++)
    {

        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                if(vec[j]==(vec[k]+vec[i]))
                {
                    cout<<vec[j]<<endl;

                }
            }
        }
    }
    return 0;
}
