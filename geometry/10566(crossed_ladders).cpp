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
#define EPS 1e-7

using namespace std;
double a,b,h,w;

void binarySearch(){
    double lo,hi,assumed_h;
    lo = 0;
    hi =  min(a,b);
    while(true){
        w = (hi-lo)/2+lo;
        assumed_h = sqrt(a*a-w*w)*sqrt(b*b-w*w)/(sqrt(a*a-w*w)+sqrt(b*b-w*w));
        if(fabs(assumed_h-h)<=EPS)
            return;
        if(assumed_h>h)lo=w;
        else hi=w;
    }
}
int main()
{

    while(scanf("%lf%lf %lf",&a,&b,&h)==3){


    binarySearch();
    printf("%.3lf\n",w);
    }

	return 0;
}
