#include <bits/stdc++.h>
using namespace std;

void CountPS(string str, int n)
{
  //  int dp[n][n];
    //memset(dp, 0, sizeof(dp));
    bool P[n][n];
    memset(P, false , sizeof(P));
    int count=0;

    for (int i= 0; i< n; i++){
       P[i][i] = true;
    }
 
    // palindrome of length 2
    for (int i=0; i<n-1; i++)
    {
        if (str[i] == str[i+1])
        {
            P[i][i+1] = true;
            count++;
            break;
        }
    }

    if(count==0)
    {
        for (int gap=2 ; gap<n; gap++)
        {
            for (int i=0; i<n-gap; i++)
            {
           
                int j = gap + i;
 
                if (str[i] == str[j] && P[i+1][j-1])
                {
                    P[i][j] = true;
                    //cout<<P[i][j]<<endl;
                    count++;  
                    break;
                 }
            }   
        }
        if (count>=1)
        printf("YES\n");
         else
        printf("NO\n"); 
    }
    else
    {
        printf("YES\n");
    }
          
 
        /*    if (P[i][j] == true)
                dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1 - dp[i+1][j-1];
            else
                dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1]; */
      
 
    // return total palindromic substrings
    //return dp[0][n-1];
}
 
int main()
{
    int t;
   scanf("%d",&t);
    while(t--)
    {
        string str;
        cin>>str;
        int n = str.length();
        CountPS(str, n);
     }
    
    return 0;
}