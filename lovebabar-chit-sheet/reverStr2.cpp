#include<iostream>
#include<string.h>
using namespace std;


///reverse a string


int main()
{
	
	
	string s;
	cin>>s;
	int n = s.length();
	int start = 0;
	int end = n-1;
	while(start <= end)
	{
		for(int i=0; i<n; i++)
		{
			swap(s[start],s[end]);
			start++;
			end--;
		}
	}
	
	cout<<s;
	
	
	return 0;
}
