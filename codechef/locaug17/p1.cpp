#include <bits/stdc++.h>
using namespace std;
void palin(char s[],int l)
{
    int i,j,k,c=0;
    for(i=1;i<l;i++)
    {
        j=i-1;
        k=i+1;
        while((j>=0)&&(k<l)&&(s[j]==s[k]))
        {
            c++;
            j--;
            k++;
            break;
        }
    }
    if(c>=1)
    {
      printf("YES\n");
    }
    else
    {
      for(i=0;i<l;i++)
    {
        j=i;
        k=i+1;
        while((j>=0)&&(k<l)&&(s[j]==s[k]))
        {
            c++;
            j--;
            k++;
            break;
        }
    }
    if (c>=1)
        printf("YES\n");
        else
        printf("NO\n");

    }
    
       
   // return c;
}
int main() {
  char s[1000000];
  int t,l;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%s",s);
      l=strlen(s);
      palin(s,l);
    }
  return 0;
}