#include<bits/stdc++.h>
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


using namespace std;
void sieve(long long range,vector<long long> &all,vector<long long> &prime)///N.LOG(LOG(N))
{
    long long  lmt=1+sqrt(range);
    vector<long long> v(1+range,0);
    prime.push_back(2);
    for(long long i=3; i<=lmt; i+=2){
        if(v[i]==0){
            for(long long j=i*i; j<=range; j+=2*i){
                v[j]=1;
            }
        }
    }
    all=v;
    for(long long i=3; i<=range; i+=2){
        if(all[i]==0)
            prime.push_back(i);
    }
}
void seg_sieve(long long a,long long b,vector<bool> &all,vector<long long> &prime)/// (B-A).LOG(LOG(B-A))
{
    long long range=sqrt(b);
    vector<long long> all01, prime01;
    sieve(range,all01,prime01);
    vector<bool> v(b-a+1,true);
    long long sze=prime01.size();
    for(long long i=0; i<sze; i++){
        long long tem=a/prime01[i];
        if(a%prime01[i]!=0) tem++;
        if(tem==1) tem++;
        for(long long j=tem*prime01[i]; j<=b; j+=prime01[i])
            v[j-a]=false;
    }
    all=v;
    for(long long i=0; i<=b-a; i++)
        if(all[i]==true)
            prime.push_back(i+a);
}
int main()
{
    inout

    long long  T;
    cin>>T;
    while(T--)
    {

         vector<bool>all;
         vector<long long> prime01,diff;
         vector<long long>::iterator it,it1;
         long long a, b;

         cin>>a>>b;

        seg_sieve(a,b,all,prime01);

        if(a==b || prime01.size()==0) {
                //cout<<prime01.size()<<"<-";
                cout<<"No jumping champion"<<endl;
        }
        else
         {
          for(it=prime01.begin(),it1=prime01.begin()+1;it1!=prime01.end();it++,it1++)
            {
                    diff.push_back((*it1)-(*it));
                                //cout<<(*it)<<" ";
            }

            set<long long>diff1(diff.begin(),diff.end());
            set<long long>::iterator it2;
            vector< pair <long long,long long> > vect;



            while(diff1.size()!=0)
            {
                it2=diff1.begin();
                int num=(*it2);
                diff1.erase(it2);
                int cnt=0;
                for(int j=0;j<diff.size();j++)
                    {
                        if(num==diff[j])
                        {
                            cnt++;

                        }
                    }
                    vect.push_back( make_pair(cnt,num) );
            }

                    sort(vect.rbegin(),vect.rend());
                    if((vect[0].first==vect[1].first))  cout<<"No jumping champion"<<endl;

                    else cout<<"The jumping champion is "<<vect[0].second<<endl;

         }




    }

}
