#include <iostream>
using namespace std;

int main() {

		int n,row=1,no=1,i;
	cin >> n;
	/*
	for(row = 1; row<=n; row++)
	{
		for(i=1; i<=row; i++)
		{
			cout<<"*"<<" ";
		}
		
		cout<<'\n';
	}
	
	
		while(row <= n)
	{
		
		for(int j=1; j<=n-row; j++)
		{
			cout<<"  ";
		}
		
		for(i=1; i<=row; i++)
		{
			cout<<i<<" ";
		}
		cout<<'\n';
		row++;
	}
	
	
	*/
	
	while(row <= n)
	{
		
		for(int j=1; j<=n-row; j++)
		{
			cout<<"  ";
		}
		
		for(i=1; i<=row; i++)
		{
			cout<<no;
		}
		
		for(i=1; i<=row-1; i++)
		{
			cout<<no<<"";
		}
	
		
		cout<<'\n';
		row++;
	}
	
	
	

	return 0;
}
