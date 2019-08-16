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
    int t,n,c,k,i,Max;
    while (scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            Max=0;
            scanf("%d",&n);
            for (k=0;k<n;k++)
            {
                scanf("%d",&c);
                Max=max(Max,c);
            }
            cout<<"Case "<<i<<": "<<Max<<lne;

        }
    }
return 0;
}
