#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;



  int max(int a, int b)
{       if(a > b )
        return a ;
        else return b;
}




int lcs( char *X, char * Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;


   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   return L[m][n];
}






int main()
{
int i=0,j=0;
char str1[],str2[];


cout<<lcs(str1,str2,str1.length(),str2.length())<<endl;




return 0;}
