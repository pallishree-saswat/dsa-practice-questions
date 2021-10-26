#include<iostream>
#include<algorithm>
using namespace std;

void sortDigits(int a[], int n)
{
	int low = 0;
	int  mid = 0;
	int high = n -1;
	
	
	while(mid <= high)
	{
		switch(a[mid])
		{
			//if the element is 0
			case 0:
				swap(a[low++],a[mid++]);
				break;
				
			//if the element is 1	
			case 1:
			    mid++;
				break;
				//if the element is 2
			case 2:
			   swap(a[mid],a[high--]);
			   break;		
		}
		
		
		
		
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
	sortDigits(a,n);
	
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
