//sum of two prime numbers

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
#define maxi  100000005


using namespace std;
bool prime[maxi] ;

void isPrime()
{
    prime[0] = prime[1] =true ;
    prime[2] = false ;
    int i,j ;
    for(i=3 ; i<=sqrt(maxi) ; i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i ; j<=maxi ; j+=(2*i))
            {
                prime[j] = true ;
            }
        }
    }
}

int main()
{
    int n ,i,k;
    isPrime() ;
    while(scanf("%d",&n)==1)
    {
        int f =0 ;
        if(n%2)     //odd
        {
            k = n-2 ;
            if(k>2 && prime[k]==false)
                printf("%d is the sum of %d and %d.\n",n,2,k) ;
            else
                printf("%d is not the sum of two primes!\n",n) ;
        }
        else    //even
        {
            for(i= n/2+1 ; i<n ; i++)
            {
                if(prime[i]==false && prime[n-i]==false && (n-i)%2!=0)
                {
                    printf("%d is the sum of %d and %d.\n",n,n-i,i) ;
                    f =1 ;
                    break ;

                }

            }
            if(!f)
            {
                printf("%d is not the sum of two primes!\n",n) ;
            }
        }
    }
    return 0;
}
