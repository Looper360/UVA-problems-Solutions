#include<bits/stdc++.h>
#define MAX 25001
#define MAX1 1001
using namespace std;
struct node
{
    long node1;
    long node2;
    long cost;
};
long int par[MAX1],n,m;
node arr[MAX];
void make_set()
{
    long i;
    for(i=0; i<n; i++)
    {
        par[i]=i;
    }
}
long find_set(long n)
{
    if(par[n]!=n)
    {
        par[n]=find_set(par[n]);
    }
    return par[n]=par[n];
}
bool comp(node x,node y)
{
    return x.cost < y.cost;
}
int main()
{
    long int i,j,k,cou,ux,uy,px,py,l=0,collect[MAX];
    while(scanf("%ld %ld",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        for(i=0; i<m; i++)
        {
            scanf("%ld%ld%ld",&arr[i].node1,&arr[i].node2 ,&arr[i].cost);
        }
        make_set();
        sort(arr,arr+m,comp);
        cou=0;
        l=0;
        for(i=0; i<m; i++)
        {
            ux=find_set(arr[i].node1);
            uy=find_set(arr[i].node2);
            if(ux!=uy)
            {
                par[ux]=uy;

            }
            else
            {
                collect[l]= arr[i].cost;
                l++;
                cou=1;
            }
        }
        if(cou==1)
        {
            for(i=0; i<l-1; i++)
            {
                printf("%ld ",collect[i]);
            }
            printf("%ld\n",collect[l-1]);
        }
        else
        {
            printf("forest\n");
        }

    }
}
