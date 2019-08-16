// a number prime or not and if it is prime then its reversed form is prime or not
//17 and 71 emuirp

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

//Critical example:
//383 is prime but not emrip.
// If the number is prime and reversed number is equal to original number then it is not emrip.

vector<ll>primes;
bool visited[1000001];
void PrimeGenerator()
{
    ll end_point= 1000000;
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

    ll n;

    PrimeGenerator();

    while( cin>>n)
    {

        if(visited[n])cout<<n<<" is not prime."<<lne;
        else
        {
            string s=to_string(n);
             //cout<<n<<"<--";
            reverse(s.begin(),s.end());
            //cout<<s<<"hoho";
            ll n1=stoll(s);
            //cout<<n1<<"<--";
           // if(n==n1)cout<<n<<" is prime."<<lne;
            if((!visited[n] && visited[n1]) || n==n1 )cout<<n<<" is prime."<<lne;
            if(!visited[n] && !visited[n1] && n!=n1)cout<<n<<" is emirp."<<lne;

        }

    }
}
