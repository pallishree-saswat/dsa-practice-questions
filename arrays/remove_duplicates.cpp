//remove duplicates from an array

#include <iostream>
using namespace std;

int remove(int a[], int n)
{
	if(n ==1 or n==0)
	{
		return n;
		
	}

	
	int j=0;
	
	for(int i=0; i<n; i++)
	{
		if(a[i] != a[i+1])
		{
			a[j++] = a[i];
		}
	}
	


return j;	

}



int main()
{
	int n = 10;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	n = remove(a,n);
	
for(int i=0; i<n; i++)
{
	cout<<a[i];
}
	

	
	
	return 0;
}
