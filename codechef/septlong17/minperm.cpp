#include <bits/stdc++.h>
using namespace std;
 
int compare (const void *a, const void * b)
{   
    return ( *( int *)a - *( int *)b ); 
}
 
void swap (int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int findCeil (int str[], int first, int l,int h)
{
    int ceilIndex = l;
    for (int i = l+1; i <= h; i++)
      if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;
    return ceilIndex;
}

void sortedPermutations ( int a[],int n )
{
    bool flag=false;
    bool isFinished = false;
    while ( ! isFinished )
    {
          for(int i=0;i<n;i++)
          {
             if(a[i]!=i+1)
                flag=true;
           	 else
                {
                	flag=false;
                	 break;
                }
          }

          if(flag==true)
          {
             for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
                cout<<endl;
                break;
          }
           
        int i;
        for ( i = n - 2; i >= 0; --i )
           if ((a[i] < a[i+1]))
              break;
 
        if ( i == -1 )
            isFinished = true;

        else
        {
          
            int ceilIndex = findCeil( a, a[i], i + 1, n - 1 );
            swap( &a[i], &a[ceilIndex] );
            qsort( a + i + 1, n - i - 1, sizeof(int), compare );
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
         cin>>n;
         int a[n];
        for(int i=0;i<n;i++)
            a[i]=i+1;
        sortedPermutations( a,n );
    }
    
    return 0;
}