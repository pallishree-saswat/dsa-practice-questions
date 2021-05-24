//remove duplicates element in an sorted array 

#include <iostream>
using namespace std;



int removeDuplicates(int a[], int n)
{
	if(n ==1 or n==0)
	{
		return n;
	}
	
	// it will store the index of unique element
	int j =0;
	
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
	
int n;
cin>>n;

int a[n];

for(int i=0; i<n; i++)
{
	cin>>a[i];
}

 n = removeDuplicates(a,n);


for(int i=0; i<n; i++)
{
	cout<<a[i]<<", ";
}

	
return 0;
}
