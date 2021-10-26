#include<iostream>
#include<string.h>
using namespace std;

int minMax( int a[], int n)
{
	int start=0;
	int end=n-1;
	while(start < end)
	{
		swap(s[start],s[end]);
		start++;
		end--;
	}
}



int main()
{
int t;
cin>>t;
while(t--){
	string s;
   cin>>s;
   int n= s.length();

	reverse(s,n);
	
	cout<<s;
}

 
	
	return 0;
}
