#include<iostream>
using namespace std;


int reverse(int a[], int n)
{
	int start=0;
	int end=n-1;
	while(start < end)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	}
}



int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i =0; i<n; i++)
	{
		cin>>a[i];
	}
	reverse(a,n);
	
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
