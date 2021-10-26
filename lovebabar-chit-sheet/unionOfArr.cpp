#include<iostream>
#include <set>
#include <unordered_map>
using namespace std;

/*using set 
int union(int a[], int b[], int n, int m)
{
	set<int> s;
	for(int i=0; i<n; i++)
	{
		s.insert(a[i]);
	}
	for(int i=0; i<m; i++)
	{
		s.insert(b[i])
	}
	
	return s.size();
}

*/

//using unorder map










int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int a[100];
	int b[100];
	unordered_map<int,int> map;
	
	for(int i =0; i<n; i++)
	{
		cin>>a[i];
		map[a[i]]++;
	}
		for(int i =0; i<m; i++)
	{
		cin>>b[i];
		map[b[i]]++;
	}
	
	cout<<map.size();
     //union(a,b,n,m);
	

	return 0;
}
