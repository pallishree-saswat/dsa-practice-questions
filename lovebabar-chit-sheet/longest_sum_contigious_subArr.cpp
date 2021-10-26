#include<iostream>
#include <unordered_map>
using namespace std;
//longest_sum_contigious_subArr

int main()
{
	int n;
	cin>>n;

	int a[n+1];

	
	for(int i =1; i<=n; i++)
	{
		cin>>a[i];

	}
	
	
	int max = INT_MIN;
	int max_till_here =0;
	
	for(int i=1; i<=n; i++)
	{
		max_till_here = max_till_here + a[i];
		if(max_till_here > max)
		{
			max = max_till_here;
		}
		if(max_till_here < 0)
		{
			max_till_here = 0;
		}
	
	}
	
		
		cout<<max;
	
	return 0;
}
