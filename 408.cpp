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
    long int n,i,j ,seed,pre ,arr[100001],step,mod,l,cou;
    while(scanf("%ld %ld",&step,&mod )==2)
    {
        seed =0;
        pre = (seed + step)%mod;
        arr[0]= pre;
        //printf("%ld",pre);
        i=1;
        while(true)
        {
            arr[i] = (arr[i-1] + step)%mod;
            if(arr[i]==pre)
                break;
            i++;

        }
        l=i;

        if(l == mod)
        {
            printf("%10ld%10ld    Good Choice\n\n",step,mod);

        }

        else
        {
            printf("%10ld%10ld    Bad Choice\n\n",step,mod);
        }

    }
    return 0;
}
