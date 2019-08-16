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
    int t,a,b,c,i,cnt=0;
    while(scanf("%d %d", &a, &b)==2)
    {
        if(a==0&&b==0)
        break;
        cnt=0;
        for(i=a;i<=b;i++)
        {
           c=sqrt(i);
           if(c*c==i)
           cnt++;
        }
        cout<<cnt<<lne;
    }
return 0;
}
