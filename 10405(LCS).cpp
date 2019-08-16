/* Dynamic Programming implementation of LCS problem */
#include <bits/stdc++.h>
using namespace std;


void lcs(string X, string Y, int m, int n )
{
    int mat[m+1][n+1];
   for (int i=0; i<=m; i++)
   {
         for (int j=0; j<=n; j++)
         {
               if (i == 0 || j == 0)
               {
                   mat[i][j] = 0;
               }

               else if (X[i-1] == Y[j-1])
                 {
                     // diagonal value+1
                     mat[i][j] = mat[i-1][j-1] + 1;
                 }
               else
               {
                   // max of upper and left value
                   mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
               }

     }
   }

           //cout << "LCS of " << X << " and " << Y << " is " ;

           int result = mat[m][n];
           cout<<result<<endl;

  }
int main()
{
    string s1,s2;
  int n,m;
    while(getline(cin,s1))
    {
          getline(cin,s2);
          m=s1.size();
          n=s2.size();
          lcs(s1, s2, m, n);
    }
  return 0;
}
