#include<bits/stdc++.h>
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool isPrime(long long int n)
{

  bool isPrime = true;


  for(long long int i = 2; i <= sqrt(n); ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      return true;
  else
     return false;
}

bool permute(string str)
{
    int prime_cnt=0;
    int permute_cnt=0;
    // Sort the string in lexicographically
    // ascennding order
    sort(str.begin(), str.end());

    // Keep printing next permutation while there
    // is next permutation
    do {
         permute_cnt++;
        //cout << str << endl;
        if(isPrime(stoi(str)))prime_cnt++;

    } while (next_permutation(str.begin(), str.end()));
    if(permute_cnt==prime_cnt)return true;
    else return false;
}
int main(){
    inout
    string str;
    int term;
    while(1){
            bool found=false;
        cin>>str;
        int len=str.size();
        long long int n=stoi(str);
        if(n==0)break;
        //cout<<n<<endl;
        for(long long int i=n+1;i<=pow(10,len);i++)
                {
                    if(len>4)break;
                    str=to_string(i);
                    if(permute(str))
                    {
                        cout<<i<<endl;
                        found=true;
                        break;
                    }
                }
    if(found==false)cout<<"0"<<endl;
    }
}
