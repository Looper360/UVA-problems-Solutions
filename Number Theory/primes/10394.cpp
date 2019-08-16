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

/**
    finding twin primes like (3,5) , (5,7) , (11,13)
**/


vector<ll>primes;
bool visited[20000010];

void PrimeGenerator()
{
    ll end_point= 20000010;
    primes.push_back(2);
    for (ll i=4;i<=end_point;i+=2)
        visited[i] = true;
        for (ll i=3;i<=end_point;i+=2)
        {
            if (!visited[i])
            {
                //cout<<i<<" ";
                primes.push_back(i);
                for (ll j=i*i;j<=end_point;j+=2*i)
                        visited[j] = true;
            }
    }
   // len = primes.size();
    ///cout<<primes[len-1]<<endl;
}
int main()
{
    PrimeGenerator();

    vector<string>p;
    for(ll i=0;i<primes.size();i++)
    {
        if((primes[i]+2)==primes[i+1])
        {
            ll a=primes[i];
            ll b=primes[i+1];

            stringstream ss;
            ss<<"("<<a<<", "<<b<<")";
            p.push_back(ss.str());


        }

    }
    ll n;

    while(scanf("%lld",&n)!=EOF)
    {
        cout<<p[n-1]<<lne;
    }
}
