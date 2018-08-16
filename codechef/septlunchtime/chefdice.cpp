#include <bits/stdc++.h>
using namespace std;

bool answer(vector < vector <int> > & matrix,vector<int> & m1,int n);

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			int a,b=0,p=0;
			vector <int> m1(7,-1);
			vector < vector <int> > matrix(7, vector<int> (7,1));
			for(int i=0;i<=6;i++)
			{
				matrix[i][i]=0;
			}

			for(int i=0;i<n;i++)
			{
				cin>>a;
				if(b==a) 
					p=1;

            	matrix[b][a]=0;
            	matrix[a][b]=0;

           		b=a;
			}	

			if(p!=1)
			{
            	if(answer(matrix,m1,1))
            	{
                	for(int i=1;i<=6;i++){
                    cout<<m1[i]<<" ";
                	}
                	cout<<endl;
            	}
            	else{
                cout<<-1<<endl;
            	}
        	}

        	else{
            cout<<-1<<endl;
        	}
		}
	}

bool answer(vector < vector <int> > & matrix,vector<int> & m1,int n)
{

    if(n==7) 
    	return true;

    int f=0;
    int x = 1;

    while(x<7)
    {
        if(m1[x]==-1)
            f=1;
        x++;
    }

    if(f==0) 
    	return true;
    
    if(m1[n]!=-1){
        if(!answer(matrix,m1,n+1))
            return false;
        else return true;
    }

    x = 1;
    while(x<7)
    {
        if(matrix[n][x] && matrix[x][n] && m1[x]==-1 && m1[n]==-1){
            m1[n]=x;
            m1[x]=n;

            if ( answer(matrix,m1,n+1) )
                return true;

           	m1[n]=-1;
            m1[x]=-1;
        }
        x++;
    } 

    return false;
}