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
ll modpwr(ll base,ll pwr)/// LOG(N)
{
    if(pwr==0)
        return 1;
    ll x=modpwr(base,pwr/2);
    ll y=(x*x);
    if(pwr%2)
        y = (y*(base));

    return y;
}
int main()
{
//inout
    ll sum=0;
   for(int i=1;i<=10;i++)
   {
       ll a=pow(i,i);
       int mod=a%10;
       sum+=mod;
       cout<<a<<" "<<sum<<lne;
   }

}
