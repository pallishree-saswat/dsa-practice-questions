//reverse a given array

#include<iostream>
using namespace std;


void reverseArray(int a[], int start, int end)
{
	while(start < end)
	{
		
	swap(a[start], a[end]);
	start++;
	end--;
	
	}
	
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

int start = 0;
int end =n-1;

reverseArray(a,start,end);        /// start end swap(start,end) start++; end--;

for(int i=0; i<n; i++)
{
	cout<<a[i]<<",";
}
	

	return 0;
}
