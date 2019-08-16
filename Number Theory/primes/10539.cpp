#include<bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define lne '\n'
#define spc ' '
#define fst first
#define sec second
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fileopen system("input.txt"); freopen("input.txt","r",stdin); FILE *f=freopen("output.txt","w",stdout);
#define fileclose fclose(f); system("output.txt");

using namespace std;

void bit_sieve(ll range,vector<ll> &all,vector<ll> &prime)///N.LOG(LOG(N))
{
    ll lmt=1+sqrt(range);
    vector<ll> v(1+range/32,0);
    prime.push_back(2);
    for(ll i=3; i<=lmt; i+=2){
        ll idx=i/32;
        ll n=i%32;
        if( (v[idx] & 1<<n)==0 ){
            for(ll j=i*i; j<=range; j+=2*i){
                ll x=j/32;
                ll y=j%32;
                v[x] = v[x] | 1<<y;
            }
        }
    }
    all=v;
    for(ll i=3; i<=range; i+=2){
        ll idx=i/32;
        ll n=i%32;
        if( (all[idx] & 1<<n)==0 )
            prime.push_back(i);
    }
}
void seg_sieve(ll a,ll b,vector<bool> &all,vector<ll> &prime)/// (B-A).LOG(LOG(B-A))
{
    ll range=sqrt(b);
    vector<ll> all01, prime01;
    bit_sieve(range,all01,prime01);
    vector<bool> v(b-a+1,true);
    ll sze=prime01.size();
    for(ll i=0; i<sze; i++){
        ll tem=a/prime01[i];
        if(a%prime01[i]!=0) tem++;
        if(tem==1) tem++;
        for(ll j=tem*prime01[i]; j<=b; j+=prime01[i])
            v[j-a]=false;
    }
    all=v;
    for(ll i=0; i<=b-a; i++)
        if(all[i]==true)
            prime.push_back(i+a);
}
int main()
{
    vector<bool> &all;
    vector<ll> &prime;

    ll T;
    cin>>T;
    while(T--)
    {
        seg_sieve()
    }

}
