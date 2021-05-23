//find largest and smallest element in an array

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	int largest = INT_MIN;
	int smallest = INT_MAX;
	
	for(int i=0; i<n; i++)
	{
		if(a[i] > largest)
		{
	   	   largest = a[i];
	    }
	    if(a[i] < smallest)
	    {
	    	smallest = a[i];
		}
	
	}
	
	cout<<"Largest value -->"<<largest<<endl;
	cout<<"Smallest value ---> "<<smallest<<endl;
	

	return 0;
}
