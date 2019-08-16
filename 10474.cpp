#include<bits/stdc++.h>
#define ll long long
//#define clr(arr, 0) memset(arr, 0, sizeof(arr))
#define vll vector<long long>
#define lne '\n'
#define spc ' '
#define fst first
#define sec second
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fileopen system("input.txt"); freopen("input.txt","r",stdin); FILE *f=freopen("output.txt","w",stdout);
#define fileclose fclose(f); system("output.txt");
using namespace std;



int main()
{
inout
    //fileopen



    int T = 1;
    int N, Q;

    while (cin >> N >> Q)
    {
        vector<ll>vec;
        if(N==0 || Q==0)break;
        for (int i = 0; i < N; ++i)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }

        sort(vec.begin(),vec.end());

        cout << "CASE# " << T++ << ":\n";
        while (Q--)
        {
            int n;
            cin >> n;
            auto index=find(vec.begin(),vec.end(),n);
            if(index!=vec.end())
            {
                cout << n << " found at " << index-vec.begin() + 1 << '\n';
            }
            else{
                 cout << n << " not found\n";
            }


    }
}
}
