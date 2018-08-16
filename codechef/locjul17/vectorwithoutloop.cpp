#include <bits/stdc++.h>
//#include <boost/filesystem.hpp>
using namespace std;

vector<long long int>::iterator ptr;

struct IncGenerator {
    int current_;
    IncGenerator (int start) : current_(start) {}
    int operator() () { return current_++; }
};

// ...



int main()
	{
		long long int n;
		cin>>n;
		vector<long long int> v(n);
		IncGenerator g (1);
		std::generate( v.begin(), v.end(), g);
		//boost::push_back(v, boost::irange(1, n));
		for(ptr=v.begin();ptr<v.end();ptr++)
			cout<<*ptr;

		vector<int> ivec(n);
		int i = 0;
		std::fill(ivec.begin(), ivec.end(), i++); 
		for(ptr=v.begin();ptr<v.end();ptr++)
			cout<<*ptr;
		return 0;
	}